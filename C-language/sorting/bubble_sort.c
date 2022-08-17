#include<stdio.h>
int main() {
    int a[] = {21, 25, 4, 1, 54, 2};
    int k = 6;
    for ( int i = 0; i < k; i++){
        for (int j = 0; j < k- 1 ; j++) {
            if (a[j] > a[j+1]) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
}
    for (int i = 0; i < k; i++)
     printf("a%d = %d\n", i , a[i]);
     return 0;
}