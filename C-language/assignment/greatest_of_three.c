#include<stdio.h>
 void  main() 
{
	int a,b,c;  // int  a,b,c;
	printf("enter  number\n",a);
	scanf("%d",&a);
	printf("enter  number\n",b);
	scanf("%d",&b);
	printf("enter  number\n",c);
	scanf("%d",&c);
	if (a>b&&a>c) {
		printf("answer\n",a);
	}
	if (b>a&&b>c) {
		printf("answer\n",b);
	}
	if (c>a&&c>b) {
		printf("answer\n",c);
	}
}

 
	