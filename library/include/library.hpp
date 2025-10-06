#pragma once

#include <curl/curl.h>
#include <string>

class AIParser {
private:
    const std::string MODEL_NAME;
    const std::string API_URL = "http://localhost:11434/api/chat";
    std::string payload;
    CURL *curl;
    CURLcode res;
public:
    AIParser(const std::string& modelName) : MODEL_NAME(modelName) {
        curl_global_init(CURL_GLOBAL_ALL);
        curl = curl_easy_init();
    }
    void parseInput(const std::string& input);
    std::string getResponse(const std::string& input) const;
};
