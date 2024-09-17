#include <stdio.h>


int linear_search(int arr[], int size, int target) {
    for (int i = 0; i < size; i++)
   	{
        if (arr[i] == target)
	   	{
            return i;
        }
    }
    return -1;  
}

int main() {
    int array[] = {24, 88, 32, 90, 56};
    int size = sizeof(array) / sizeof(array[0]);
    int target = 90;
    
    int index = linear_search(array, size, target);
    
    if (index != -1) 
	{
        printf("Element %d found at index %d.\n", target, index);
    } else
   	{
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}

