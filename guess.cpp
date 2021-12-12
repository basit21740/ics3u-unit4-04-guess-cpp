// Copyright (c) 2021 Abdul Basit All rights reserved.
//
// Created by: Abdul Basit
// Created on: Nov 2021
// this program is the number guessing game

#include <iostream>
#include <random>

int main() {
    // this function for creating guessing game
    // variables
	std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0,9);
    const int RANDOM_NUM = idist(rgen);
	int guess;

    // Process , Input & Output
	while (true) {
		std::cout << "Please guess a number: ";
		std::cin >> guess;

		if (guess == RANDOM_NUM) {
			std::cout << "You guessed CORRECT 😎, the number is " << RANDOM_NUM << std::endl;
			break;
		}
		std::cout << "Incorrect 🙁" << std::endl;
	}

    // output
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}