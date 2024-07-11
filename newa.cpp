#include <stdio.h>
#include <stdlib.h>

void sort_except_special(int arr[], int n, int special) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[i] != special && arr[j] != special && arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void print_array(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {3, 12, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
     
    sort_except_special(arr, n, 12);
    print_array(arr, n);
    return 0;
    
}
