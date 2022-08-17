#include <stdio.h>
void swap(int*, int, int);
int main() {
    int arr[] = {-55, 12, 46, 93, 0};
    int minIndex = 0;
    for(int i = 0; i < 5; i++) {
        minIndex = i;
        for(int j = i+1; j < 5; j++) {
            if(arr[minIndex] > arr[j])
                minIndex = j;
        }
        swap(arr, i, minIndex);
    }
    
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

void swap(int array[], int i, int minIndex ) {
    int temp = array[i];
    array[i] = array[minIndex];
    array[minIndex] = temp;
}