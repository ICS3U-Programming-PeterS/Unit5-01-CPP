// Copyright (c) 2022 Peter Sobowale All rights reserved.
//
// Created by: Peter Sobowale
// Created on: Nov 24 2022
// This program converts the temp in celsius to fahrenheit.

#include <iomanip>
#include <iostream>

void CalculateFahrenheit() {
    // declares variables
    std::string tempCelsiusString;
    float tempCelsiusFloat;
    float tempFahrenheit;

    // gets the temperature from user in degrees celsius
    std::cout << "Enter the temperature (°C): ";
    std::cin >> tempCelsiusString;

    // checks if the user has entered valid  number
    try {
        // convert the user's guess to a float
        tempCelsiusFloat = std::stof(tempCelsiusString);

        // convert to fahrenheit
        tempFahrenheit = (9.0 / 5.0) * tempCelsiusFloat + 32;

        // Output the temp in fahrenheit after conversion
        std::cout << std::fixed << std::setprecision(2) << tempCelsiusFloat;
        std::cout << "°C is equal to " << std::fixed;
        std::cout << std::setprecision(2) << tempFahrenheit << "°F\n";

        // determines if the the answer is a number
    } catch (std::invalid_argument) {
        // tells user did the input is not a number
        std::cout << tempCelsiusString << " is not a number.\n";
    }
}

int main() {
    // calls the fahrenheit function
    CalculateFahrenheit();
}
