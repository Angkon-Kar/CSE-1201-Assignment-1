/*
 * Program: Sort Array in Ascending Order
 * Description: This program sorts an array in ascending order using bubble sort algorithm.
 * Author: CSE-1201 Assignment
 */

#include <stdio.h>

// Function to sort array in ascending order using bubble sort
void bubbleSortAscending(int arr[], int n) {
    int i, j, temp;
    printf("\nSorting process:\n");
    
    for (i = 0; i < n - 1; i++) {
        printf("Pass %d: ", i + 1);
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        
        // Display array after each pass
        for (int k = 0; k < n; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
}

int main() {
    int n, i;
    
    // Get the size of the array from user
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    // Declare array
    int arr[n];
    
    // Read array elements from user
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Display the original array
    printf("\nOriginal array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Sort the array in ascending order
    bubbleSortAscending(arr, n);
    
    // Display the sorted array
    printf("\nFinal sorted array (Ascending): ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

/*
Sample Output:
Enter the number of elements: 5
Enter 5 elements:
Element 1: 64
Element 2: 34
Element 3: 25
Element 4: 12
Element 5: 22

Original array: 64 34 25 12 22

Sorting process:
Pass 1: 34 25 12 22 64
Pass 2: 25 12 22 34 64
Pass 3: 12 22 25 34 64
Pass 4: 12 22 25 34 64

Final sorted array (Ascending): 12 22 25 34 64
*/