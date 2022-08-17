#include<stdio.h>
int main() {
    int arr[] = {12,25,26,30,36,48,65,69,75,80,81,89,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key,l,h,mid;
    printf("enter any number from array:");
    scanf("%d",&key);
    l = 0;
        h = n;
    while(l<=h){
        mid = (l+h) / 2;
         if (key == arr[mid] )
         printf("your number is %d",mid);
         if (key < arr[mid] )
         h = mid - 1;
         else
         l = mid + 1;
    }
    return 0;
}