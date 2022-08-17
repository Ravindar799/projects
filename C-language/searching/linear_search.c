#include <stdio.h>
#include<math.h>
int main() {
int arr[] = {1,57,65,8,4,6,2,};
int n = sizeof(arr)/sizeof(arr[0]);
int a,i;
  printf("enter your number from array:");
  scanf("%d", &a);
  for (i = 0; i < n; i++) {
      if(arr[i] == a) {
          printf("index of your number is%d",i);
          break;
      }
  }
  if(arr[i] != a ) {
      printf("element not found");
  }
}