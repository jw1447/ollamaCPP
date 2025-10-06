#pragma once

#include <curl/curl.h>
#include <string>

class AIParser {
private:
    const std::string MODEL_NAME;
    const std::string API_URL = "http://localhost:11434/api/chat";
    Curl* curl;
public:
    AIParser(const std::string& modelName) : MODEL_NAME(modelName) {}
    void parseInput(const std::string& input);
    std::string getResponse(const std::string& input) const;
};
