#include <stdio.h>

struct vector {
    int i;
    int j;
};

struct vector sumVector(struct vector v1, struct vector v2) {
    struct vector v3; // Declare the vector
    v3.i = v1.i + v2.i; // Sum the i components
    v3.j = v1.j + v2.j; // Sum the j components
    return v3; // Return the result
}

int main() {
    struct vector v1 = {1, 2};
    struct vector v2 = {5, 6};
    struct vector v3 = sumVector(v1, v2);
    printf("The value of vector v3 is %di + %dj\n", v3.i, v3.j);
    
    return 0;
}
