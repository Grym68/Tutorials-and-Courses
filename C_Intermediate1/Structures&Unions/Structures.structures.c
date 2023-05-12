#include <stdio.h>

typedef struct {
    int x;
    int y;
} point;

typedef struct {
    float radius;
    point center;
} cirlce;

int main() {
    point p = {3, 4};

    cirlce c = {3.14, p};

    /* Or it can be declared like this
    cirlce c = {3.14, {3, 4}};
    */

    printf("Circle radiu is %.2f, center is at (%d, %d)\n", c.radius, c.center.x, c.center.y);

    return 0;
}