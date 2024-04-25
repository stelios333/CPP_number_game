#include <iostream>
#include <cstring>
#include "input.h"
#include "random_num.h"

int main(int argc, char* argv[]){
    bool cheat_mode = false;
    if (argc >= 2) { 
        if(strcmp(argv[1], "cheat") == 0){
            cheat_mode = true;
        }; 
    }
    std::cout << "You have to guess a number between 1 and 1000.\n";
    int the_random_number = rand_int(1,1000);
    if(cheat_mode){
        std::cout << "The number is " << the_random_number << ", lol.\n";
    }
    int input = 1001; // Imposible for any number over 1000 to be the correct awnser
    int trials = 0;
    
    while(the_random_number!=input){
        input = getUserInput("Enter a number: ");
        trials += 1;
        if(input > the_random_number) {
            std::cout << "The number is too big.\n";
        } else if (input<the_random_number){
            std::cout << "The number is too small.\n";
        }
    }
    std::cout << "Congratulations you guessed the number with " << trials << " trials!";
    if(cheat_mode) {
        std::cout << " But you cheated :(\n";
    }
    return 0;
}