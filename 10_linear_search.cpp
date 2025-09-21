/*
 * Program: Linear Search for an Element
 * Description: This program searches for a specific element in an array using linear search.
 * Author: CSE-1201 Assignment
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to perform linear search
int linearSearch(const vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return i; // Return the index where element is found
        }
    }
    return -1; // Return -1 if element is not found
}

int main() {
    int n, target;
    
    // Get the size of the array from user
    cout << "Enter the number of elements: ";
    cin >> n;
    
    // Declare vector
    vector<int> arr(n);
    
    // Read array elements from user
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << (i + 1) << ": ";
        cin >> arr[i];
    }
    
    // Display the array
    cout << "\nArray elements are: ";
    for (int element : arr) {
        cout << element << " ";
    }
    cout << endl;
    
    // Get the element to search
    cout << "\nEnter the element to search: ";
    cin >> target;
    
    // Method 1: Using manual linear search
    int result = linearSearch(arr, target);
    
    // Method 2: Using STL find (alternative approach)
    auto it = find(arr.begin(), arr.end(), target);
    int stl_result = (it != arr.end()) ? distance(arr.begin(), it) : -1;
    
    // Display the result
    if (result != -1) {
        cout << "Element " << target << " found at position " << (result + 1) 
             << " (index " << result << ")" << endl;
    } else {
        cout << "Element " << target << " not found in the array" << endl;
    }
    
    // Show search process
    cout << "\nSearch process:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Checking position " << (i + 1) << ": " << arr[i];
        if (arr[i] == target) {
            cout << " -> Found!" << endl;
            break;
        } else {
            cout << " -> Not match, continue..." << endl;
        }
    }
    
    if (result == -1) {
        cout << "Element not found after checking all positions." << endl;
    }
    
    // Additional information using STL
    cout << "\nUsing STL find(): ";
    if (stl_result != -1) {
        cout << "Element found at index " << stl_result << endl;
    } else {
        cout << "Element not found" << endl;
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

Using STL find(): Element found at index 2
*/