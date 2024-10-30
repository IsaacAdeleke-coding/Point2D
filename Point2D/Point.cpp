//
//  Point.cpp
//  Point2D
//
//  Created by Isaac Adeleke on 10/29/24.
//

#include "Point.hpp"

// Constructor
Point::Point(int xCoord, int yCoord) : x(xCoord), y(yCoord) {}

// Getter methods
int Point::getX() const {
    return x;
}

int Point::getY() const {
    return y;
}

// Overloaded equality operator (==)
bool Point::operator==(const Point& other) const {
    return (x == other.x) && (y == other.y);
}

// Overloaded stream insertion operator (<<)
std::ostream& operator<<(std::ostream& os, const Point& point) {
    os << "(" << point.x << ", " << point.y << ")";
    return os;
}

