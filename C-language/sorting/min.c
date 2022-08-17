#include<stdio.h>
void main() {
    int a[15],i, min;
    for (i = 0; i<6;i++) {
    printf("enter your number\n");
    scanf("%d",&a[i]);
    }
    int n = 6;
    min = a[0];
    for(i = 1; i <= n; i++) {
        if( a[0] < a[i]) {
            a[0] = a[i];
        }
    }
    printf(" minimum number is %d", a[0]);
}
