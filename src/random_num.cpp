#include <iostream>
#include <random>

int rand_int(int min, int max) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(min, max);

    int random_number = dis(gen);

    return random_number;
}