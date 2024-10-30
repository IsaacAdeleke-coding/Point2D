//
//  main.cpp
//  Point2D
//
//  Created by Isaac Adeleke on 10/29/24.
//

#include <iostream>
#include "Point.hpp"

int main() {
    Point p1(3, 4);
    Point p2(3, 4);
    Point p3(5, 6);

    std::cout << "Point p1: " << p1 << std::endl;
    std::cout << "Point p2: " << p2 << std::endl;
    std::cout << "Point p3: " << p3 << std::endl;

    if (p1 == p2) {
        std::cout << "p1 is equal to p2." << std::endl;
    } else {
        std::cout << "p1 is not equal to p2." << std::endl;
    }

    if (p1 == p3) {
        std::cout << "p1 is equal to p3." << std::endl;
    } else {
        std::cout << "p1 is not equal to p3." << std::endl;
    }

    return 0;
}
