// Copyright (2025) Aaron Rivelino All rights reserved.
// Date: March 7, 2025
// This code calculates the area and perimeter
// of a circle using radius

#include <cmath>
#include <iostream>

int main() {
    // Get radius length with user input
    float rad;
    std::cout << "Enter the radius of a circle (cm): ";
    std::cin >> rad;

    // Define the value of pi
    const float PI = 3.14159;

    // Calculations to get the circumference and area
    float circ = PI * 2 * rad;
    float area = PI * std::pow(rad, 2);

    // Display the results of the calculations with two decimal places
    std::cout.precision(2);
    std::cout << std::fixed;
    std::cout << "The area of the circle is: " << area << std::endl;
    std::cout << "The perimeter (circumference) of the circle is:"
    << circ << std::endl;

    return 0;
}
