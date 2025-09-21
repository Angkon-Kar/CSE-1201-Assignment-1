/*
 * Program: Find the Smallest Element in an Array
 * Description: This program finds and displays the smallest element in an array.
 * Author: CSE-1201 Assignment
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    
    // Get the size of the array from user
    cout << "Enter the number of elements: ";
    cin >> n;
    
    // Declare vector to store elements
    vector<int> arr(n);
    
    // Read array elements from user
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << (i + 1) << ": ";
        cin >> arr[i];
    }
    
    // Find the smallest element using min_element function
    int smallest = *min_element(arr.begin(), arr.end());
    
    // Alternative method: manual search
    // int smallest = arr[0];
    // for (int i = 1; i < n; i++) {
    //     if (arr[i] < smallest) {
    //         smallest = arr[i];
    //     }
    // }
    
    // Display the array
    cout << "\nArray elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Display the smallest element
    cout << "The smallest element is: " << smallest << endl;
    
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