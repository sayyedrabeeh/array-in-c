#include <stdio.h>
int main() {
    int arr[20], size, i, j, temp;
    printf("Enter Array Size : ");
    scanf("%d", &size);
    printf("Enter the elements : ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    // Sort the array in ascending order
    for (i = 0; i < size ; i++) {
        for (j = i+1; j < size ; j++) {
            if (arr[i] > arr[j ]) {
                // Swap elements if they are in the wrong order
                temp = arr[i];
                arr[ji] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // Print the sorted array
    printf("Array in ascending order: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
