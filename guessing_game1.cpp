#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    // Generate a random number between 1 and 100
    int targetNumber = std::rand() % 100 + 1;
    
    int playerGuess;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!\n";
    std::cout << "I've selected a random number between 1 and 100.\n";

    while (true) {
        std::cout << "Your guess: ";
        std::cin >> playerGuess;
        attempts++;

        if (playerGuess < targetNumber) {
            std::cout << "Too low!\n";
        } else if (playerGuess > targetNumber) {
            std::cout << "Too high!\n";
        } else {
            std::cout << "Congratulations! You guessed the correct number (" << targetNumber << ") in " << attempts << " attempts.\n";
            break;
        }
    }

    return 0;
}
