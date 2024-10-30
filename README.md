# Point2D Project

## Overview
The **Point2D** project is a C++ application designed to represent and manipulate 2D points with simple x and y coordinates. This project provides foundational C++ concepts, including class design, operator overloading, and stream handling. The `Point` class includes:
- Coordinate initialization
- Equality comparison
- Stream output for easy display of point coordinates

## Files

- **Point.hpp**: Header file defining the `Point` class and overloaded operators.
- **Point.cpp**: Implementation file for `Point` methods and operators.
- **main.cpp**: Contains test cases to demonstrate the functionality of the `Point` class.
- **README.md**: Documentation for project overview, usage, and structure.

## Class Structure and Features

### Point Class

The `Point` class represents a 2D point with integer coordinates.

#### Attributes
- **x**: The x-coordinate of the point.
- **y**: The y-coordinate of the point.

#### Methods

- **Constructor**: Initializes a `Point` object with specified `x` and `y` coordinates. Defaults to `(0, 0)` if no values are provided.
  
  ```cpp
  Point(int xCoord = 0, int yCoord = 0);


Getters:
int getX() const; – Returns the x-coordinate.
int getY() const; – Returns the y-coordinate.
Operator Overloading

Equality Operator (==): Compares two points for equality based on their x and y coordinates.
bool operator==(const Point& other) const;

Stream Insertion Operator (<<): Outputs a point in the format (x, y), facilitating easy display.
friend std::ostream& operator<<(std::ostream& os, const Point& point);

Usage

Compilation and Execution
To compile and run the Point2D project, follow these steps:

Open a terminal and navigate to the project directory.
Compile the code using g++:

g++ -o main Point.cpp main.cpp

Run the executable:
./main

Example Output
The provided test cases in main.cpp demonstrate basic functionality:


Point p1: (3, 4)
Point p2: (3, 4)
Point p3: (5, 6)
p1 is equal to p2.
p1 is not equal to p3.

Explanation
The << operator displays points in (x, y) format.
The == operator checks if two points have identical coordinates.


