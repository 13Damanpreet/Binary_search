#include <stdio.h>

int binaryfirst(int arr[], int size, int target) {
    int start = 0;
    int end = size - 1;
    int ans = -1;  // Initialize to -1 to indicate target not found

    while (start <= end) {
        int mid = (start + end) / 2;
        
        if (arr[mid] == target) {
            ans = mid;       // Update ans with the current position
            end = mid - 1;   // Continue searching in the left half
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return ans;  // Return the index of the first occurrence or -1 if not found
}

int binarylast(int arr[], int size, int target) {
    int start = 0;
    int end = size - 1;
    int ans = -1;  // Initialize to -1 to indicate target not found

    while (start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] == target) {
            ans = mid;       // Update ans with the current position
            start = mid + 1; // Continue searching in the right half
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return ans;  // Return the index of the last occurrence or -1 if not found
}

int main() {
    int arr[] = {1, 2, 3, 4, 4, 4, 4, 4, 4, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate size dynamically
    int target = 4;
    int first, last;

    first = binaryfirst(arr, size, target);
    last = binarylast(arr, size, target);

    int count ;
    count = last-first+1;
    printf("%d",count);

    return 0;
}
