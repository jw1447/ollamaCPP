#include "../include/library.hpp"

int main() {

    AIParser parser("gemma3:latest");
    std::string response = parser.getResponse("Hello, AI!");
    return 0;
}