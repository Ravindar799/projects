#include <stdio.h>

float add(float a, float b) {
  float sum = a+b;
  printf("%f\n", sum);
  return sum;
}

float division(float a, float b) {
    float division = a/b;
    printf("%f\n", division);
    return division;
}

float multi(float a, float b) {
    float multi = a*b;
    printf("%f\n", multi);
    return multi;
}

float subtract(float a, float b) {
    float subtract = a-b;
    printf("%f\n", subtract);
    return subtract;
}

int main() {
   float a, b;
   int choice = 1;
   while(choice) {
    printf("Enter two inputs\n");
       scanf("%f", &a);
       scanf("%f", &b);
       printf("Enter your choice\n");
       printf(" 1==> addition  2 ==> division 3 ==> mul 4 ==> sub\n");
       printf("Enter 0 to exit\n");
       scanf("%d", &choice);
       switch(choice) {
            case 1: add(a, b);
                   break;
            case 2: division(a, b);
                   break;
            case 3: multi(a, b);
                   break;
            case 4: subtract(a, b);
                   break;                     
       }
   }
    printf("Thank you for using our mini calculator!");
    return 0;
}
