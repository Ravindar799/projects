
#include <stdio.h>

int main() {
    int A[] = {0,52,5,6,8};
    int n = 5;
    int i, j, x;
    for ( i = 0; i < n; i++)
     printf("%d\n", A[i]);
     printf ("\n");
    for (i= 1; i < n; i++) {
       j = i-1;
       x = A[i];
       while(j>-1 && A[j] < x) {
       A[j+1] = A[j];
        j--;
    }
    A[j+1] = x;
}
for ( i = 0; i < n; i++)
     printf("%d\n", A[i]);
     return 0;
}