#include <stdio.h>


// call by value or pass by value
int main() {
    // Write C code here
    int a, b;
    a=5;
    b=9;
    changeValues(a, b);
    printf("a = %d, b = %d", a, b);
    return 0;
}

void changeValues(int a, int b) {
    a = 20;
    b = 10;
    printf("a = %d, b = %d\n", a, b);
}

