#include <stdio.h>

// Define function pointer types
typedef double (*AreaFunc)();
typedef double (*PerimeterFunc)();

// Simulate an "interface" with a struct of function pointers
typedef struct {
    AreaFunc area;
    PerimeterFunc perimeter;
} Shape;

// Implementations for Circle
double circle_area() { return 3.14 * 1.0 * 1.0; } // Assume radius = 1
double circle_perimeter() { return 2 * 3.14 * 1.0; }

// Implementations for Square
double square_area() { return 2.0 * 2.0; } // Assume side = 2
double square_perimeter() { return 4 * 2.0; }

int main() {
    // Create a "Circle" object
    Shape circle;
    circle.area = circle_area;
    circle.perimeter = circle_perimeter;

    // Create a "Square" object
    Shape square;
    square.area = square_area;
    square.perimeter = square_perimeter;

    // Polymorphic behavior
    printf("Circle Area: %f\n", circle.area());       // Output: 3.14
    printf("Square Perimeter: %f\n", square.perimeter()); // Output: 8.0
}