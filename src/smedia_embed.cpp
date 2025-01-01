#include "smedia_embed.h"
#include <iostream>

SocialMediaEmbedHandler::SocialMediaEmbedHandler(dpp::cluster& bot) :
    bot(bot),
    tiktok_regex(TIKTOK_MATCH),
    instagram_regex(INSTAGRAM_MATCH),
    ytshorts_regex(YTSHORTS_MATCH),
    twitter_regex(TWITTER_MATCH) {}

void SocialMediaEmbedHandler::handleEmbed(const dpp::message_create_t& event) {
    std::cout << "Received message: " << event.msg.content << std::endl;
    std::smatch match;

    if (std::regex_search(event.msg.content, match, tiktok_regex)) {
        std::cout << "TikTok match found: " << match[0] << std::endl;
        fixTikTokEmbed(match[0], event);
    }
    else if (std::regex_search(event.msg.content, match, instagram_regex)) {
        fixInstagramEmbed(match[0], event);
    }
    else if (std::regex_search(event.msg.content, match, ytshorts_regex)) {
        fixYTShortsEmbed(match[0], event);
    }
    else if (std::regex_search(event.msg.content, match, twitter_regex)) {
        fixTwitterEmbed(match[0], event);
    }
}

void SocialMediaEmbedHandler::fixTikTokEmbed(const std::string& link, const dpp::message_create_t& event) {
    std::string fixed_link = link;
    fixed_link.replace(link.find("tiktok.com"), 10, "vxtiktok.com");
    bot.message_create(dpp::message(event.msg.channel_id, fixed_link).set_reference(event.msg.id));
}

void SocialMediaEmbedHandler::fixInstagramEmbed(const std::string& link, const dpp::message_create_t& event) {
    std::string fixed_link = link;
    fixed_link.replace(link.find("instagram.com"), 13, "instagramez.com");
    bot.message_create(dpp::message(event.msg.channel_id, fixed_link).set_reference(event.msg.id));
}

void SocialMediaEmbedHandler::fixYTShortsEmbed(const std::string& link, const dpp::message_create_t& event) {
    std::string fixed_link = link;
    fixed_link.replace(link.find("youtube.com/shorts"), 14, "youtube.com/watch?v=");
    bot.message_create(dpp::message(event.msg.channel_id, fixed_link).set_reference(event.msg.id));
}

void SocialMediaEmbedHandler::fixTwitterEmbed(const std::string& link, const dpp::message_create_t& event) {
    std::string fixed_link = link;
    if (fixed_link.find("x.com") != std::string::npos) {
        fixed_link.replace(fixed_link.find("x.com"), 5, "twittpr.com");
    }
    else if (fixed_link.find("twitter.com") != std::string::npos) {
        fixed_link.replace(fixed_link.find("twitter.com"), 11, "twittpr.com");
    }

    bot.message_create(dpp::message(event.msg.channel_id, fixed_link).set_reference(event.msg.id));
}