/*
 * Program: Linear Search for an Element
 * Description: This program searches for a specific element in an array using linear search.
 * Author: CSE-1201 Assignment
 */

#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Return the index where element is found
        }
    }
    return -1; // Return -1 if element is not found
}

int main() {
    int n, i, target, result;
    
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
    printf("\nArray elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Get the element to search
    printf("\nEnter the element to search: ");
    scanf("%d", &target);
    
    // Perform linear search
    result = linearSearch(arr, n, target);
    
    // Display the result
    if (result != -1) {
        printf("Element %d found at position %d (index %d)\n", target, result + 1, result);
    } else {
        printf("Element %d not found in the array\n", target);
    }
    
    // Show search process
    printf("\nSearch process:\n");
    for (i = 0; i < n; i++) {
        printf("Checking position %d: %d", i + 1, arr[i]);
        if (arr[i] == target) {
            printf(" -> Found!\n");
            break;
        } else {
            printf(" -> Not match, continue...\n");
        }
    }
    
    if (i == n && result == -1) {
        printf("Element not found after checking all positions.\n");
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

Enter the element to search: 78
Element 78 found at position 3 (index 2)

Search process:
Checking position 1: 45 -> Not match, continue...
Checking position 2: 23 -> Not match, continue...
Checking position 3: 78 -> Found!
*/