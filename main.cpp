#include "dictionary.hpp"
#include "game.hpp"
#include <iostream>

int main () {
    Dictionary words;
    Game begin;
    begin.chosenWord(words.retrieveList());
    begin.setEmptyWord(begin.grabEmptyWord());
    
    std::cout << "Welcome to Hangman! Enter a letter to begin the game: ";

    while (begin.getLetterCount() != 0 && begin.showLives() != 0) {
        char response;
        std::cin >> response;
        begin.myGuess(response);
        begin.getEmptyWord(begin.grabEmptyWord());
        if (begin.getLetterCount() != 0) {
            std::cout << "\nLives left: " << begin.showLives();
            std::cout << "\nEnter another word: ";
        }
    }

    std::cout << "\nWhether you lost or won, thank you for playing.\n";
    std::cout << "The word was: " << begin.getWord() << "\n";
    std::cout << "Press Enter to close to the program.";

    std::string pressEnter;
    std::getline(std::cin, pressEnter);
    std::cin.ignore();
    return 0;
}