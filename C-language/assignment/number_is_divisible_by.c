#include<stdio.h>
int main()
{
    int a;  
	printf("enter  number\n");
	scanf("%d",&a);
    if ( a % 5 == 0 &&  a % 11 == 0){
        printf("number is divisible by 5 and 11\n %d " , a);
    }
    else{
        printf("number is not divisible by 5 and11\n %d", a);
    }
    return 0;
    
}           