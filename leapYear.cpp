// Copyright (c) 2022 Katie G All rights reserved.
//
// Created by: Katie G
// Created on : October 26th, 2022
// This program asks the user for a year,
// then uses a try... catch statement to make
// sure the user input is actually an integer,
// then the program uses nested if... statements
// to check the remainder of the leap year when divided
// by 4, 100 and 400 respectively.
#include <iostream>
#include <string>

// this function gets the user's year, checks
// to make sure the year is actually an integer, then
// checks to see if it is divisible by 4, 100 and 400
// by using % (the modulo operation).
int main() {
    // initializing user year & user year as int variables.
    std::string userYear;
    int userYearAsInt;

    // getting the user input for the year.
    std::cout << "Hello! Please give me a year, and I ";
    std::cout << "will tell you if it is a leap year or not! ";
    std::cin >> userYear;

    // try...catch statement to check if user year is a valid int.
    try {
        userYearAsInt = std::stoi(userYear);
        if (userYearAsInt % 4 == 0) {
            if (userYearAsInt % 100 == 0) {
                if (userYearAsInt % 400 == 0) {
                    std::cout << userYearAsInt << " is a leap year!";
                } else {
                    std::cout << userYearAsInt << " is NOT a leap year!";
                }
            } else {
                std::cout << userYearAsInt << " is a leap year!";
            }
        } else {
            std::cout << userYearAsInt << " is NOT a leap year!";
        }
    } catch (std::invalid_argument) {
        std::cout << "Sorry, this is not a valid year. ";
        std::cout << "Please only input an integer.";
    }

    // this line of code acts as the "finally" piece, since
    // c++ does not have that block.
    std::cout << "\n Thank you for using this program! ";
    std::cout << "I hope you found it helpful!";
}
