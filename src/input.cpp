#include <iostream>

int getUserInput(std::string prompt) {
    int input;
    std::cout << prompt;
    std::cin >> input;
    return input;
}