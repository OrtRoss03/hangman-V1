#include "dictionary.hpp"

Dictionary::Dictionary() {
    setUp(words, list);
}

std::vector<std::string> Dictionary::retrieveList() {
    return words;
}

void Dictionary::setUp(std::vector<std::string>& vector, const std::string& file) {
    std::ifstream myFile(file);
    std::string line;
    while (getline(myFile, line)) {
        vector.push_back(line);
    }
}