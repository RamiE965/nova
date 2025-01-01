#include <iostream>
#include <cpr/cpr.h>
#include <nlohmann/json.hpp>
#include <ctime>

// simplify json naming
using json = nlohmann::json;

const std::string api_key = "RGAPI-3385b24b-7b26-4eeb-820e-2f520f085f5f";

// response class structure of Clash Tournaments endpoint
struct TournamentPhaseDto {
	int id;
	long registrationTime;
	long startTime;
	bool cancelled;
};

struct TournamentDto {
	int id;
	int themeId;
	std::string nameKey;
	std::string nameKeySecondary;
	std::vector<TournamentPhaseDto> schedule;
};

// Returns a list of active and upcoming Clash tournaments
std::vector<TournamentDto> getLOLClashDates()
{
	std::vector<TournamentDto> tournaments;

	auto response = cpr::Get(
		cpr::Url{ "https://na1.api.riotgames.com/lol/clash/v1/tournaments/?api_key=" + api_key }
	);

	if (response.status_code == 200) {
		auto json_r = json::parse(response.text);
		std::cout << json_r << "\n"; // debugging stuff
		for (const auto& tournament : json_r)
		{
			TournamentDto dto;
			dto.id = tournament["id"].get<int>();
			dto.themeId = tournament["themeId"].get<int>();
			dto.nameKey = tournament["nameKey"].get<std::string>();
			dto.nameKeySecondary = tournament["nameKeySecondary"].get<std::string>();

			// handle schedules array similarly
			for (const auto& phase : tournament["schedule"]) {
				TournamentPhaseDto phaseDto;
				phaseDto.id = phase["id"].get<int>();
				phaseDto.registrationTime = phase["registrationTime"].get<long>();
				phaseDto.startTime = phase["startTime"].get<long>();
				phaseDto.cancelled = phase["cancelled"].get<bool>();
				dto.schedule.push_back(phaseDto);
			}

			tournaments.push_back(dto);
		}
	}
	else {
		throw std::runtime_error("Failed to get tournamnets: " + response.text);
	}

	return tournaments;
}

// Convert clash tournament vector to strings vector
std::vector<std::string> getLOLClashDatesAsStrings() {
	// dateStrings holds human readable dates
	std::vector<std::string> dateStrings;
	auto tournaments = getLOLClashDates();

	for (const auto& tournament : tournaments) {
		for (const auto& phase : tournament.schedule) {
			// Convert from unix time to readable string
			time_t time = phase.startTime / 1000; // Convert from milliseconds to seconds
			std::string dateStr = std::ctime(&time);
			// Remove newline that ctime adds
			dateStr = dateStr.substr(0, dateStr.length() - 1);
			dateStrings.push_back(dateStr);
		}
	}

	return dateStrings;
}