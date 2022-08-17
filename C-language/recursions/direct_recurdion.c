#include<stdio.h>
int fact(int n)
{
    if(n == 1) 
       return 1;
     else 
        return n * fact(n -1);
}
int main() {
    int n;
    printf("enter you number:");
    scanf("%d", &n);
    printf("factorial of n %d is%d", n, fact(n));
}