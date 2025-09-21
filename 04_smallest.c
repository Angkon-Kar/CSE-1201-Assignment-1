/*
 * Program: Find the Smallest Element in an Array
 * Description: This program finds and displays the smallest element in an array.
 * Author: CSE-1201 Assignment
 */

#include <stdio.h>

int main() {
    int n, i, smallest;
    
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
    
    // Initialize smallest with first element
    smallest = arr[0];
    
    // Find the smallest element
    for (i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    
    // Display the array
    printf("\nArray elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Display the smallest element
    printf("The smallest element is: %d\n", smallest);
    
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

Array elements are: 45 23 78 12 67
The smallest element is: 12
*/