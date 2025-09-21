/*
 * Program: Find the Second Largest Element in an Array
 * Description: This program finds and displays the second largest element in an array.
 * Author: CSE-1201 Assignment
 */

#include <stdio.h>
#include <limits.h>

int main() {
    int n, i, largest, second_largest;
    
    // Get the size of the array from user
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    if (n < 2) {
        printf("Array should have at least 2 elements.\n");
        return 1;
    }
    
    // Declare array
    int arr[n];
    
    // Read array elements from user
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Initialize largest and second_largest
    largest = second_largest = INT_MIN;
    
    // Find the largest and second largest elements
    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
    
    // Display the array
    printf("\nArray elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Display the second largest element
    if (second_largest == INT_MIN) {
        printf("No second largest element found (all elements might be same).\n");
    } else {
        printf("The largest element is: %d\n", largest);
        printf("The second largest element is: %d\n", second_largest);
    }
    
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
The largest element is: 78
The second largest element is: 67
*/