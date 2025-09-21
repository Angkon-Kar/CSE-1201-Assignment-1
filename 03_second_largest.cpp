/*
 * Program: Find the Second Largest Element in an Array
 * Description: This program finds and displays the second largest element in an array.
 * Author: CSE-1201 Assignment
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n;
    
    // Get the size of the array from user
    cout << "Enter the number of elements: ";
    cin >> n;
    
    if (n < 2) {
        cout << "Array should have at least 2 elements." << endl;
        return 1;
    }
    
    // Declare vector to store elements
    vector<int> arr(n);
    
    // Read array elements from user
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << (i + 1) << ": ";
        cin >> arr[i];
    }
    
    // Method 1: Using sorting (commented out for educational purposes)
    // vector<int> sorted_arr = arr;
    // sort(sorted_arr.rbegin(), sorted_arr.rend());
    // int second_largest = sorted_arr[1];
    
    // Method 2: Single pass algorithm
    int largest = INT_MIN, second_largest = INT_MIN;
    
    // Find the largest and second largest elements
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
    
    // Display the array
    cout << "\nArray elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Display the second largest element
    if (second_largest == INT_MIN) {
        cout << "No second largest element found (all elements might be same)." << endl;
    } else {
        cout << "The largest element is: " << largest << endl;
        cout << "The second largest element is: " << second_largest << endl;
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