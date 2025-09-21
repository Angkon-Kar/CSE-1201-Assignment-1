# CSE-1201-Assignment-1
Array Operations in C and C++

## Overview
This repository contains complete, well-commented, and runnable C and C++ programs for 10 essential array operations. Each operation is implemented in both C and C++ with comprehensive comments and sample outputs.

## Programs Included

### 1. Read and Display Array (`01_read_display.c` & `01_read_display.cpp`)
- Reads an array of integers from user input
- Displays the array elements

### 2. Find Largest Element (`02_largest.c` & `02_largest.cpp`)
- Finds and displays the largest element in the array
- C version uses manual iteration
- C++ version demonstrates both STL and manual approaches

### 3. Find Second Largest Element (`03_second_largest.c` & `03_second_largest.cpp`)
- Finds and displays the second largest element
- Handles edge cases (duplicate elements, insufficient elements)

### 4. Find Smallest Element (`04_smallest.c` & `04_smallest.cpp`)
- Finds and displays the smallest element in the array
- C version uses manual iteration
- C++ version demonstrates both STL and manual approaches

### 5. Calculate Sum (`05_sum.c` & `05_sum.cpp`)
- Calculates and displays the sum of all array elements
- C version uses manual loop
- C++ version demonstrates STL `accumulate` function

### 6. Calculate Average (`06_average.c` & `06_average.cpp`)
- Calculates and displays the average of all array elements
- Includes proper floating-point handling

### 7. Find Median (`07_median.c` & `07_median.cpp`)
- Calculates and displays the median of array elements
- Handles both odd and even number of elements
- Shows original and sorted arrays

### 8. Sort in Ascending Order (`08_sort_asc.c` & `08_sort_asc.cpp`)
- Sorts array in ascending order using bubble sort
- Shows step-by-step sorting process
- C++ version also demonstrates STL `sort` function

### 9. Sort in Descending Order (`09_sort_desc.c` & `09_sort_desc.cpp`)
- Sorts array in descending order using bubble sort
- Shows step-by-step sorting process
- C++ version demonstrates STL `sort` with custom comparator

### 10. Linear Search (`10_linear_search.c` & `10_linear_search.cpp`)
- Searches for a specific element using linear search algorithm
- Shows detailed search process
- C++ version also demonstrates STL `find` function

## Compilation Instructions

### For C Programs:
```bash
gcc -o program_name file_name.c
```

Example:
```bash
gcc -o read_display 01_read_display.c
gcc -o largest 02_largest.c
gcc -o sum 05_sum.c
```

### For C++ Programs:
```bash
g++ -o program_name file_name.cpp
```

Example:
```bash
g++ -o read_display_cpp 01_read_display.cpp
g++ -o largest_cpp 02_largest.cpp
g++ -o sum_cpp 05_sum.cpp
```

## Execution
After compilation, run the programs:
```bash
./program_name
```

## Features
- **Well-commented code**: Each program includes comprehensive comments explaining the logic
- **Sample outputs**: Every program includes sample input/output in comments
- **Error handling**: Programs include basic input validation where appropriate
- **Educational value**: C++ versions show both traditional and STL approaches
- **Step-by-step demonstrations**: Sorting and search programs show detailed processes

## Sample Usage

### Example: Running the sum program
```bash
$ gcc -o sum 05_sum.c
$ ./sum
Enter the number of elements: 5
Enter 5 elements:
Element 1: 10
Element 2: 20
Element 3: 30
Element 4: 40
Element 5: 50

Array elements are: 10 20 30 40 50
Sum of all elements: 150
```

### Example: Running the linear search program
```bash
$ gcc -o search 10_linear_search.c
$ ./search
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
```

## Author
CSE-1201 Assignment

## License
MIT License
