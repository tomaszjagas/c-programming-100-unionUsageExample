#include <stdio.h>

union mixed {
    char c;
    float f;
    int i;
};

union number {
    int x;
    double y;
};

int main() {
    union mixed x;
    x.c = 'j';
    printf("Character = %c\n", x.c);

    union number value;

    value.x = 100;
    printf("value of integer x: %d\n", value.x);
    printf("value of double y: %f\n", value.y);

    value.y = 100.0;
    printf("value of integer x: %d\n", value.x);
    printf("value of double y: %f\n", value.y);

    union number x1;
    union number *y = &x1;

    y -> y = 100.0;

    printf("value of integer x: %d\n", y -> x);
    printf("value of double y: %f\n", y -> y);

    return 0;
}