#ifndef GAME_HPP
#define GAME_HPP
#include "dictionary.hpp"

class Game : public Dictionary {
private:
    int lives;
    std::string word;
    std::vector<char> emptyWord;
    int letterCount;
public:
    Game();
    int showLives();
    void myGuess(char guess);
    std::string getWord();
    void setLetterCount(int& count);
    int& getLetterCount();
    void setEmptyWord(std::vector<char>& empty);
    void getEmptyWord(std::vector<char>& empty);
    std::vector<char>& grabEmptyWord();
    void chosenWord(std::vector<std::string> vector);
};

#endif