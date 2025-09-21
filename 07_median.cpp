/*
 * Program: Find the Median of Array Elements
 * Description: This program finds and displays the median of all elements in an array.
 * Author: CSE-1201 Assignment
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    int n;
    
    // Get the size of the array from user
    cout << "Enter the number of elements: ";
    cin >> n;
    
    // Declare vectors
    vector<int> arr(n);
    vector<int> sorted_arr(n);
    
    // Read array elements from user
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << (i + 1) << ": ";
        cin >> arr[i];
        sorted_arr[i] = arr[i]; // Copy for sorting
    }
    
    // Sort the copy array
    sort(sorted_arr.begin(), sorted_arr.end());
    
    // Calculate median
    double median;
    if (n % 2 == 0) {
        // If even number of elements
        median = static_cast<double>(sorted_arr[n/2 - 1] + sorted_arr[n/2]) / 2;
    } else {
        // If odd number of elements
        median = static_cast<double>(sorted_arr[n/2]);
    }
    
    // Display the original array
    cout << "\nOriginal array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Display the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << sorted_arr[i] << " ";
    }
    cout << endl;
    
    // Display the median
    cout << "Median of the array: " << fixed << setprecision(2) << median << endl;
    
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