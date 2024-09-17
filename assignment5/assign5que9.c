#include <stdio.h>


int binary_search(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; 

        if (arr[mid] == target) {
            return mid; 
        } else if (arr[mid] < target)
	   	{
            low = mid + 1;
        } else {
            high = mid - 1; 
        }
    }

    return -1; 
}

int main() {
    
    int array[] = {12, 23, 34, 45, 56, 67, 78, 89, 90};
    int size = sizeof(array) / sizeof(array[0]);
    int target = 45;

    int index = binary_search(array, size, target);

    if (index != -1) {
        printf("Element %d found at index %d.\n", target, index);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}

