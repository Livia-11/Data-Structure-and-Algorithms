#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>

// Function to choose a random word from a list
std::string getRandomWord(const std::vector<std::string>& words) {
    srand(static_cast<unsigned int>(time(0))); // Seed for random number generation
    int index = rand() % words.size();
    return words[index];
}

// Function to display the current state of the word
void displayWord(const std::string& word, const std::vector<bool>& guessed) {
    for (size_t i = 0; i < word.length(); ++i) {
        if (guessed[i]) {
            std::cout << word[i] << " ";
        } else {
            std::cout << "_ ";
        }
    }
    std::cout << std::endl;
}

// Function to check if the entire word is guessed
bool isWordGuessed(const std::vector<bool>& guessed) {
    return std::all_of(guessed.begin(), guessed.end(), [](bool v) { return v; });
}

int main() {
    // List of words to guess from
    std::vector<std::string> words = {"programming", "hangman", "word", "guess", "computer", "science"};

    // Choose a random word
    std::string wordToGuess = getRandomWord(words);
    std::vector<bool> guessed(wordToGuess.length(), false);
    int attempts = 6; // Number of allowed wrong attempts

    std::cout << "Welcome to the Word Guesser Game!" << std::endl;
    std::cout << "You have " << attempts << " attempts to guess the word." << std::endl;

    // Game loop
    while (attempts > 0) {
        displayWord(wordToGuess, guessed);

        // Get player's guess
        std::cout << "Enter a letter: ";
        char guess;
        std::cin >> guess;

        // Check if the guessed letter is in the word
        bool correctGuess = false;
        for (size_t i = 0; i < wordToGuess.length(); ++i) {
            if (wordToGuess[i] == guess && !guessed[i]) {
                guessed[i] = true;
                correctGuess = true;
            }
        }

        if (!correctGuess) {
            attempts--;
            std::cout << "Wrong guess! You have " << attempts << " attempts left." << std::endl;
        } else {
            std::cout << "Good guess!" << std::endl;
        }

        // Check if the word is fully guessed
        if (isWordGuessed(guessed)) {
            std::cout << "Congratulations! You've guessed the word: " << wordToGuess << std::endl;
            break;
        }
    }

    // If out of attempts, the player loses
    if (attempts == 0) {
        std::cout << "Game over! You've run out of attempts. The word was: " << wordToGuess << std::endl;
    }

    return 0;
}
   
