#include <stdio.h>
// int changeValues(int, int);


// call by reference or pass by reference
int main() {
    int a, b;
    a = 5;
    b = 9;
    changeValues(&a, &b);
    printf("a = %d, b = %d", a, b);
    return 0;
}

void changeValues(int *a, int *b) {
    *a = 20;
    *b = 10;
    printf("a = %d, b = %d\n", *a, *b);
}


