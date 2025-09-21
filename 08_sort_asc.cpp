/*
 * Program: Sort Array in Ascending Order
 * Description: This program sorts an array in ascending order using STL sort algorithm.
 * Author: CSE-1201 Assignment
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to display array
void displayArray(const vector<int>& arr, const string& message) {
    cout << message;
    for (int element : arr) {
        cout << element << " ";
    }
    cout << endl;
}

// Manual bubble sort implementation (for educational purposes)
void bubbleSortAscending(vector<int>& arr) {
    int n = arr.size();
    cout << "\nSorting process:" << endl;
    
    for (int i = 0; i < n - 1; i++) {
        cout << "Pass " << (i + 1) << ": ";
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
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
    
    // Declare vector
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
    
    // Method 1: Using STL sort (recommended)
    sort(arr.begin(), arr.end());
    displayArray(arr, "Sorted using STL sort (Ascending): ");
    
    // Method 2: Using manual bubble sort
    cout << "\nUsing manual bubble sort:" << endl;
    bubbleSortAscending(arr_copy);
    displayArray(arr_copy, "\nFinal sorted array (Ascending): ");
    
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
Sorted using STL sort (Ascending): 12 22 25 34 64

Using manual bubble sort:

Sorting process:
Pass 1: 34 25 12 22 64
Pass 2: 25 12 22 34 64
Pass 3: 12 22 25 34 64
Pass 4: 12 22 25 34 64

Final sorted array (Ascending): 12 22 25 34 64
*/