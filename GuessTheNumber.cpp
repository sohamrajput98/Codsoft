#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));
    int secretNumber = std::rand() % 100 + 1;
    int guess = 0;

    std::cout << "Guess the number (between 1 and 100): ";

    while (true) {
        std::cin >> guess;

        if (guess <= 0) {
            std::cout << "Please enter a positive integer: ";
            continue;
        }

        if (guess > secretNumber) {
            std::cout << "Too high! Try again: ";
        } else if (guess < secretNumber) {
            std::cout << "Too low! Try again: ";
        } else {
            std::cout << "Congratulations! You guessed the number!\n";
            break;
        }
    }

    return 0;
}
