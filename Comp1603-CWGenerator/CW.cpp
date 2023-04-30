#include <iostream>
#include <cmath>

int calculateGrade(float* grades) {
    return ceil(((grades[0] / 20 * 0.06) + (grades[1] / 25 * 0.06) + (grades[2] / 25 * 0.08) + 
            (((grades[3] <= 26) ? grades[3] : 26) / 26 * 0.15) + (grades[4] / 30 * 0.15)) * 100);
}

int main() {
    float grades[5];
    std::cout << "Enter Assignment 1 grade (out of 20): ";
    std::cin >> grades[0];
    std::cout << "Enter Assignment 2 grade (out of 25): ";
    std::cin >> grades[1];
    std::cout << "Enter Assignment 3 grade (out of 25): ";
    std::cin >> grades[2];
    std::cout << "Enter Coursework 1 grade (out of 30): ";
    std::cin >> grades[3];
    std::cout << "Enter Coursework 2 grade (out of 30): ";
    std::cin >> grades[4];

    std::cout << "The final grade is: " << calculateGrade(grades) << std::endl;
    return 0;
}
