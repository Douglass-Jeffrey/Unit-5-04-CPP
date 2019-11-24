// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Douglass Jeffrey
// Created on: Nov 2019
// This program calculates The area of a cylinder using multiple functions

#include <iostream>
#include <string>
#include <math.h>


float calculator(float radius, float length) {
    // variables
    float volume;

    // process
    volume = M_PI * radius * radius * length;
    return volume;
}


main() {
    // this function recieves user inputs
    // variables
    std::string stringLength;
    std::string stringRadius;
    float length;
    float radius;
    float volume;

    while (true) {
        try {
            // input

            std::cout << "Input the radius of the Cylnder: " << std::endl;
            std::cin >> stringRadius;
            std::cout << "Input the length of the Cylinder: " << std::endl;
            std::cin >> stringLength;
            // turns variables into float which is needed for fractional values
            length = std::stof(stringLength);
            radius = std::stof(stringRadius);

            // runs calculator()
            volume = calculator(radius, length);

            // output
            std::cout << "Your cylinders volume is " << volume << " units^3"
                      << std::endl;
            break;
        } catch(std::invalid_argument) {
            std::cout << "Please input only proper values"<< std::endl;
        }
    }
}
