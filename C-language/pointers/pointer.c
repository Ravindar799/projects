#include<stdio.h>
#define n 5
int main() {
    int a[n], *p;
    printf("enter 5 numbers of array");
    for(p = a; p <= a+n-1; p++)
    scanf("%d", p);
    printf("elements in reverse order:\n");
    for(p = a+n-1; p >= a; p--)
    printf("%d ", *p);
    return 0;
}