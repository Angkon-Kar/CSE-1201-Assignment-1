/*
 * Program: Find the Sum of Array Elements
 * Description: This program calculates and displays the sum of all elements in an array.
 * Author: CSE-1201 Assignment
 */

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    
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
    
    // Calculate sum of all elements
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    // Display the array
    printf("\nArray elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Display the sum
    printf("Sum of all elements: %d\n", sum);
    
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

Array elements are: 10 20 30 40 50
Sum of all elements: 150
*/