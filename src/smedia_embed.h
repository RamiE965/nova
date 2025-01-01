#pragma once
#include <string>
#include <regex>
#include <dpp/dpp.h>

// Constants for regex patterns
const std::string TIKTOK_MATCH = R"(https:\/\/(www\.)?((vm|vt)\.tiktok\.com\/[A-Za-z0-9]+|tiktok\.com\/@[\w.]+\/(video|photo)\/[\d]+\/?|tiktok\.com\/t\/[a-zA-Z0-9]+\/))";
const std::string INSTAGRAM_MATCH = R"(https:\/\/(www\.)?instagram\.com\/(?:p|reel|reels)\/[^/?#&]+\/?(?:\?[^#\s]*)?)";
const std::string YTSHORTS_MATCH = R"(https?://(?:www\.)?youtube\.com/shorts/[a-zA-Z0-9_-]+)";
const std::string TWITTER_MATCH = R"(https:\/\/(www.)?(twitter|x)\.com\/[a-zA-Z0-9_]+\/status\/[0-9]+)";

class SocialMediaEmbedHandler {
public:
    SocialMediaEmbedHandler(dpp::cluster& bot);

    void handleEmbed(const dpp::message_create_t& event);

private:
    dpp::cluster& bot;
    std::regex tiktok_regex;
    std::regex instagram_regex;
    std::regex ytshorts_regex;
    std::regex twitter_regex;

    void fixTikTokEmbed(const std::string& link, const dpp::message_create_t& event);
    void fixInstagramEmbed(const std::string& link, const dpp::message_create_t& event);
    void fixYTShortsEmbed(const std::string& link, const dpp::message_create_t& event);
    void fixTwitterEmbed(const std::string& link, const dpp::message_create_t& event);
};