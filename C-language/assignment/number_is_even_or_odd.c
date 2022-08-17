#include<stdio.h>
void main ()
{
    int a;
    printf ("enter your number \n");
    scanf("%d", &a);
    if(a % 2 == 0){
        printf("even %d", a);
    }else{
        printf("odd %d", a);
    }
}