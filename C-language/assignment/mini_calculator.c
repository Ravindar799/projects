#include<stdio.h> 

 void main() {
    char A = '\0';
    float a, b;
    int isExit = 1;
    printf("%d===================>", 5/2);
    while(isExit) {
        printf("Enter an operator (+, -, *, /):\n");
        scanf(" %c", &A);
        printf("%c====>", A);
        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);
        switch (A) {
            case '+':
                printf("%f + %f = %f", a , b , a + b);
                break;
            case '-':
                printf("%f - %f = %f",  a , b , a - b);
                break;
            case '*':
                printf("%.1f * %.1f = %.1f", a , b , a * b );
                break;
            case '/':
                printf("%.1f / %.1f = %.1f", a , b , a / b);
                break;
            default:
            printf("invaild");
        }
        printf("\nDo you want to continue?\n");
        printf("Press 0 to exit or 1 t""o continue\n ");
        scanf("%d", &isExit);
    }

  
}
  

   