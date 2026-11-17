// Copyright (c) Year Your Name All rights reserved.
// .
// Created by: Fred
// Date: Feb 18 2008
// Checks if a number is the correct guess

#include <cstdlib>
#include <iostream>
#include<string>

int main() {
    int user_num;
    float user_dec;
    std::string number;

    // declare integer to hold random number

    int someRandomNumber;

    // initialize random seed

    srand((unsigned)time(NULL));

    // generate a random number between 1 and 9

    someRandomNumber = rand() % 9 + 1;
    do {
        // Get number from the user.
        std::cout << "Enter a number between 0 and 9 : ";
        std::cin >> number;

        // Verify if the number is a decimal, an integer or none.
        try {
            user_num = std::stoi(number);
            user_dec = std::stof(number);
            if (user_num != user_dec) {
                std::cout << "The number cannot be a decimal\n";
            }
            if (user_num == someRandomNumber) {
                std::cout << user_num << " is the correct guess.\n";
                break;
            } else {
                std::cout << user_num << " is not the correct guess.\n";
            }
        } catch (std::invalid_argument) {
            std::cout << number << " is not a valid number."
                                   "Please, enter a new one\n";
        }
    } while (user_num != someRandomNumber);
    std::cout << "Thanks for using the code";
}
