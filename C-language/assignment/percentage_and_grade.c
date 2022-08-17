#include<stdio.h>

void main() {
    float arr[5], sum, percentage;
    int i;
       for(i  = 0 ; i < 5 ; i++) {  
        printf("enter your marks\n");
        scanf("%f", &arr[i]);
       }
        sum = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
        percentage = sum/500*100;

            if(percentage >= 90) {
                printf( "A grade");
            } else if(percentage >= 80) {
                printf( "B grade");
            } else if(percentage >= 70) {
                printf( "C grade");
            } else if(percentage >= 60) {
                printf( "D grade");
            } else if(percentage >= 50) {
                printf( "E grade");
            } else if(percentage >= 40) {
                printf( "F grade");
            } else {
                printf("fail");
            }
}