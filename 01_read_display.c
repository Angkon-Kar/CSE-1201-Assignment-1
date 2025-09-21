/*
 * Program: Read and Display an Array
 * Description: This program reads an array of integers from the user and displays it.
 * Author: CSE-1201 Assignment
 */

#include <stdio.h>

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
    
    // Display the array
    printf("\nArray elements are:\n");
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
Element 1: 10
Element 2: 20
Element 3: 30
Element 4: 40
Element 5: 50

Array elements are:
10 20 30 40 50
*/