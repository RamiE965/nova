#include <iostream>
#include <dpp/dpp.h>
#include <cstdlib>
#include "smedia_embed.h"
#include "leetcode.h"
#include "clash.h"

int main() {
	dpp::cluster bot(std::getenv("BOT_TOKEN"),
		dpp::i_default_intents | dpp::i_message_content);

	SocialMediaEmbedHandler handler(bot);

	// listen to message post
	bot.on_message_create([&handler](const dpp::message_create_t& event) {
		// ignore bots
		if (event.msg.author.is_bot()) return;
			// check for social media embed
			handler.handleEmbed(event);
		});

	// fire these events when a command is issued
	bot.on_slashcommand([&bot](const dpp::slashcommand_t& event) {
		if (event.command.get_command_name() == "ping") {
			auto start = std::chrono::steady_clock::now();

			// defer the reply
			event.thinking();

			auto now = std::chrono::steady_clock::now();
			auto latency = std::chrono::duration_cast<std::chrono::milliseconds>(now - start);

			dpp::embed pingEmbed = dpp::embed()
				.set_color(dpp::colors::green)
				.set_title("🏓 Pong!")
				.add_field(
					"Latency",
					"Bot Latency: " + std::to_string(latency.count()) + "ms",
					false
				);

			// edit ther eply with the final edit 
			event.edit_response(dpp::message(event.command.channel_id, pingEmbed));
		}

		if (event.command.get_command_name() == "lolclash") {
			std::vector<std::string> clashDateList = getLOLClashDatesAsStrings();
			dpp::embed clashEmbed = dpp::embed()
				.set_color(dpp::colors::azure)
				.set_title("Upcoming Clash Tournaments")
				.set_description("A list of all upcoming Clash tournament dates as per Riot Games API")
				.set_url("https://support-leagueoflegends.riotgames.com/hc/en-us/articles/360000951548-Clash-FAQ") // hard-coded
				.set_thumbnail("https://media.discordapp.net/attachments/1306480813449412711/1320112628449804379/riot-games480.png?ex=67686a31&is=676718b1&hm=1249e9378dc024fb647ceb08e0a65f406e723597d1108ccafa9df8807c520e7d&=&format=webp&quality=lossless");
				
				// add clash dates to the embed
				if (clashDateList.empty()) { 
					clashEmbed.add_field(
						"No Tournaments Scheduled",
						"There are no upcoming Clash tournaments :(",
						false
					);
				}
				else {
					std::string allClashDates;
					// go over every date and append to string
					for (const auto& date : clashDateList) {
						allClashDates += date + "\n";
					}
					clashEmbed.add_field("Tournament Schedule", allClashDates, false);
				}

			// package the embed as a message
			dpp::message msg(event.command.channel_id, clashEmbed);

			event.reply(msg);
		}

		if (event.command.get_command_name() == "leetcode") {
			Problem leetcodeProblem;
			std::string diff = std::get<std::string>(event.get_parameter("Difficulty"));
			if (diff.length() > 0)
			{
				leetcodeProblem = getRandomProblemByDifficulty(diff);
			}
			else { leetcodeProblem = getRandomProblem(); }
			dpp::embed leetcodeEmbed = dpp::embed()
				.set_color(leetcodeProblem.difficulty == "Easy" ? dpp::colors::green : 
					leetcodeProblem.difficulty == "Medium" ? dpp::colors::yellow : dpp::colors::red)
				.set_title("Leetcode Problem: " + leetcodeProblem.name)
				.set_description("NeetCode150 Problem: " + leetcodeProblem.name + "\n" + "Difficulty: " +
					leetcodeProblem.difficulty + "\nCategory: " + leetcodeProblem.category)
				.set_url(leetcodeProblem.leetcode_link)
				.set_image("https://cdn.iconscout.com/icon/free/png-512/free-leetcode-logo-icon-download-in-svg-png-gif-file-formats--technology-social-media-vol-4-pack-logos-icons-2944960.png?f=webp&w=256")
				.add_field(
					"Problem",
					leetcodeProblem.leetcode_link
				)
				.add_field(
					"Solution",
					leetcodeProblem.neetcode_link
				);
			dpp::message msg(event.command.channel_id, leetcodeEmbed);
			event.reply(msg);
		}
	});

	bot.on_ready([&bot](auto event) {
		// registers commands when bot is loaded
		if (dpp::run_once<struct register_bot_commands>()) {
			bot.global_command_create(
				dpp::slashcommand("ping", "Check bot latency!", bot.me.id)
			);
			bot.global_command_create(
				dpp::slashcommand("lolclash", "Get LOL Clash Dates!", bot.me.id)
			);
			bot.global_command_create(
				dpp::slashcommand("leetcode", "Get a random LC Question!", bot.me.id).add_option(
					dpp::command_option(dpp::co_string, "Difficulty", "Choose Problem Difficulty", "false")
					.add_choice(dpp::command_option_choice("Easy", std::string("Easy")))
					.add_choice(dpp::command_option_choice("Medium", std::string("Medium")))
					.add_choice(dpp::command_option_choice("Hard", std::string("Hard")))
					)
			);
		}
	});

	bot.start(dpp::st_wait);
	return 0;
}