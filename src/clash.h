#pragma once
#include <string>
#include <vector>

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

std::vector<TournamentDto> getLOLClashDates();
std::vector<std::string> getLOLClashDatesAsStrings();