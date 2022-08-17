#include<stdio.h>
void fum(int n) {
    if (n == 0)
        return ;
    else 
    printf("%d",n);
    return fum(n - 1);
}
    int main() {
        fum(3);
        return 0;
    }