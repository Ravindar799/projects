#include<stdio.h>
 void main() 
{
	
	int a,b,c;  // int  a,b,c;
	printf("enter  number\n",a);
	scanf("%d",&a);
	printf("enter  number\n",b);
	scanf("%d",&b);
	printf("enter  number\n",c);
	scanf("%d",&c);
	if (a >= b && a >= c)  {
       if (b >= c)
        printf(" 2greatest of three, %d\n", b);
       if (c >= b)
        printf("2greatest of three, %d\n", c);
    }
	if (b >= a && b >= c) {
       if (a >= c)
        printf("2greatest of three, %d\n", a);
       if (c >= a)
        printf("2greatest of three, %d\n", c);
    }
	if (c >= b && c >= a) {
       if (a >= b)
        printf("2greatest of three, %d\n", a);
       if (b >= a)
        printf("2greatest of three, %d\n", b);
    }
	
    
		
}

 
	