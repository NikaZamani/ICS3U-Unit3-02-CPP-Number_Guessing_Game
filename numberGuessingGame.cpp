// Copyright (c) 2021 Nika Zamani All rights reserved
//
// Created by Nika Zamani
// Created on April 2021
// This program guesses a number between 0 and 9

#include <iostream>

int main() {
    // this function guesses a number between 0 and 9
    const int correct_answer = 5;
    int player_guess;

    // input
    std::cout << "Enter the number between 0 - 9: ";
    std::cin  >> player_guess;
    std::cout << "" << std::endl;

    // process
if (player_guess == correct_answer) {
    std::cout << "You guessed correct!";
} else {
    std::cout << "You guessed wrong!";
}


    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
