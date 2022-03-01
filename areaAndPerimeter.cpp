// Copyright (c) 2022 Miguel Santacruz All rights reserved
//
// Created by: Miguel Santacruz
// Created on: Feb 2022
// This program calculates area and perimeter of a circle
//    with a radius of 15 mm

#include <iostream>
#include <cmath>

int main() {
    std::cout << "If a circle has a radius of 15 mm: " << std::endl;
    std::cout << std::endl;
    std::cout << "Its area is " << (M_PI * pow(15, 2)) << " mm²." << std::endl;
    std::cout << "Its perimeter is " << (2 * M_PI * 15) << " mm." << std::endl;

    std::cout << "\nDone." << std::endl;
}
