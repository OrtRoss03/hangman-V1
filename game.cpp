#include "game.hpp"
#include <ctime>
#include <cstdlib>

Game::Game() : Dictionary() {
    this->lives = 6;
}

int Game::showLives() {
    return lives;
}

void Game::chosenWord(std::vector<std::string> vector) {
    srand(time(0));
    int number = rand() % vector.size();
    this->word = vector.at(number);
    this->letterCount = word.length();
}

void Game::setLetterCount(int& count) {
    this->letterCount = count;
}

int& Game::getLetterCount() {
    return letterCount;
}

std::string Game::getWord() {
    return word;
}

void Game::setEmptyWord(std::vector<char>& empty) {
    for (int i = 0; i < word.length(); i++) {
        empty.push_back('_');
    }
}

void Game::getEmptyWord(std::vector<char>& empty) {
    for (char c : empty) {
        std::cout << c << " ";
    }
}

std::vector<char>& Game::grabEmptyWord() {
    return emptyWord;
}

void Game::myGuess(char guess) {
    int occurrences = 0;
    for (int i = 0; i < word.length(); i++) {
        if (guess == word[i]) {
            emptyWord[i] = guess;
            occurrences++;
        }
    }

    if (occurrences > 0) {
        letterCount -= occurrences;
    }
    else {
        lives--;
    }
}