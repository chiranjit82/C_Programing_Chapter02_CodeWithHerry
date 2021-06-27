#include<stdio.h>

int main() {
    int a = 5, b, c;    // Type declearation instraction.
    b = c = a;  // Type declearation instraction.
    printf("The value of b is %d \n", b);
    printf("The value of c is %d \n", c);
    printf("The value of a is %d \n", a);

    float x = 1.1;
    float y = 8.9 + x;
    // float x = 1.1;  // Produced error.
    printf("The sum of x and y is :%f \n", y);

    return 0;
}