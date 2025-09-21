/*
 * Program: Sort Array in Descending Order
 * Description: This program sorts an array in descending order using STL sort algorithm.
 * Author: CSE-1201 Assignment
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

// Function to display array
void displayArray(const vector<int>& arr, const string& message) {
    cout << message;
    for (int element : arr) {
        cout << element << " ";
    }
    cout << endl;
}

// Manual bubble sort implementation for descending order (for educational purposes)
void bubbleSortDescending(vector<int>& arr) {
    int n = arr.size();
    cout << "\nSorting process:" << endl;
    
    for (int i = 0; i < n - 1; i++) {
        cout << "Pass " << (i + 1) << ": ";
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {  // Changed condition for descending order
                // Swap elements
                swap(arr[j], arr[j + 1]);
            }
        }
        
        // Display array after each pass
        for (int element : arr) {
            cout << element << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    
    // Get the size of the array from user
    cout << "Enter the number of elements: ";
    cin >> n;
    
    // Declare vectors
    vector<int> arr(n);
    vector<int> arr_copy(n);
    
    // Read array elements from user
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << (i + 1) << ": ";
        cin >> arr[i];
        arr_copy[i] = arr[i];
    }
    
    // Display the original array
    displayArray(arr, "\nOriginal array: ");
    
    // Method 1: Using STL sort with greater<int>() comparator (recommended)
    sort(arr.begin(), arr.end(), greater<int>());
    displayArray(arr, "Sorted using STL sort (Descending): ");
    
    // Method 2: Using manual bubble sort
    cout << "\nUsing manual bubble sort:" << endl;
    bubbleSortDescending(arr_copy);
    displayArray(arr_copy, "\nFinal sorted array (Descending): ");
    
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
Sorted using STL sort (Descending): 64 34 25 22 12

Using manual bubble sort:

Sorting process:
Pass 1: 64 34 25 22 12
Pass 2: 64 34 25 22 12
Pass 3: 64 34 25 22 12
Pass 4: 64 34 25 22 12

Final sorted array (Descending): 64 34 25 22 12
*/