#ifndef Dictionary_HPP
#define Dictionary_HPP
#include <iostream>
#include <vector>
#include <fstream>

class Dictionary {
private:
    int size = 0;
    std::vector<std::string> words;
    std::string list = "words.txt";
public:
    Dictionary();
    void setUp(std::vector<std::string>& vector, const std::string& file);
    std::vector<std::string> retrieveList();
};

#endif