#include <stdio.h>

typedef struct Circle {
    double radius;
    double (*area)(struct Circle*);
    double (*perimeter)(struct Circle*);
} Circle;

double circle_area(Circle* c) {
    return 3.14 * c->radius * c->radius;
}

double circle_perimeter(Circle* c) {
    return 2 * 3.14 * c->radius;
}

int main() {
    Circle c = { .radius = 10.0, .area = circle_area, .perimeter = circle_perimeter };
    printf("Area: %f\n", c.area(&c)); // Output: 3.14
}
