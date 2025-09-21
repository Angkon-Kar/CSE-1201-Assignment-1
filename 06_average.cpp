/*
 * Program: Find the Average of Array Elements
 * Description: This program calculates and displays the average of all elements in an array.
 * Author: CSE-1201 Assignment
 */

#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>
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
    
    // Calculate sum using accumulate function
    int sum = accumulate(arr.begin(), arr.end(), 0);
    
    // Calculate average
    double average = static_cast<double>(sum) / n;
    
    // Display the array
    cout << "\nArray elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Display the sum and average
    cout << "Sum of all elements: " << sum << endl;
    cout << "Average of all elements: " << fixed << setprecision(2) << average << endl;
    
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
Average of all elements: 30.00
*/