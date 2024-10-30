//
//  Point.hpp
//  Point2D
//
//  Created by Isaac Adeleke on 10/29/24.
//

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>

class Point {
private:
    int x;
    int y;

public:
    // Constructor with default parameters
    Point(int xCoord = 0, int yCoord = 0);

    // Getters for x and y coordinates
    int getX() const;
    int getY() const;

    // Overload the equality operator (==)
    bool operator==(const Point& other) const;

    // Overload the stream insertion operator (<<)
    friend std::ostream& operator<<(std::ostream& os, const Point& point);
};

#endif // POINT_HPP
