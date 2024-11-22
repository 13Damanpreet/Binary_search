#include <stdio.h>

int peakelement(int arr[], int size) {
    int mid;
    int start = 0;
    int end = size - 1;

    if (size == 1 || arr[0] > arr[1]) {
        return 0; 
    }
    if (arr[size - 1] > arr[size - 2]) {
        return size - 1; 
    }

    while (start <= end) {
        mid = end + (start - end) / 2;

        if (arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]) {
            return mid; 
        }

        if (mid > 0 && arr[mid - 1] > arr[mid]) {
            end = mid - 1; 
        } else {
            start = mid + 1; 
        }
    }
    
    return -1;  
    
}

int main() {
    int arr[] = {1,3,5,7,8,9,10,18,17,15}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int res = peakelement(arr, size);
    printf("%d",res);
    return 0;
}
