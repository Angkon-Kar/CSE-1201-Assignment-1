/*
 * Program: Find the Median of Array Elements
 * Description: This program finds and displays the median of all elements in an array.
 * Author: CSE-1201 Assignment
 */

#include <stdio.h>

// Function to sort array using bubble sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    float median;
    
    // Get the size of the array from user
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    // Declare arrays
    int arr[n], sorted_arr[n];
    
    // Read array elements from user
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sorted_arr[i] = arr[i]; // Copy for sorting
    }
    
    // Sort the copy array
    bubbleSort(sorted_arr, n);
    
    // Calculate median
    if (n % 2 == 0) {
        // If even number of elements
        median = (float)(sorted_arr[n/2 - 1] + sorted_arr[n/2]) / 2;
    } else {
        // If odd number of elements
        median = (float)sorted_arr[n/2];
    }
    
    // Display the original array
    printf("\nOriginal array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Display the sorted array
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", sorted_arr[i]);
    }
    printf("\n");
    
    // Display the median
    printf("Median of the array: %.2f\n", median);
    
    return 0;
}

/*
Sample Output:
Enter the number of elements: 5
Enter 5 elements:
Element 1: 45
Element 2: 23
Element 3: 78
Element 4: 12
Element 5: 67

Original array: 45 23 78 12 67
Sorted array: 12 23 45 67 78
Median of the array: 45.00
*/