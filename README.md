# Bubble_Sort
This repository contains a concise and efficient C++ implementation of Bubble Sort, a simple sorting algorithm that repeatedly compares adjacent elements and swaps them if they are in the wrong order.

# Algo Visualisation
![image](https://github.com/harshy1718/Bubble_Sort/assets/129788726/51e08221-b427-4238-8514-69569e62c7d9)

# Algo Complexity
## a. TIme: 
The time complexity of Bubble Sort is O(n^2), where n is the number of elements. It compares adjacent elements and swaps them if they are in the wrong order, repeating this process until the array is sorted. Bubble Sort is inefficient for large arrays due to its quadratic time complexity. Other sorting algorithms like Quick Sort or Merge Sort are generally preferred for better performance.

## Space: 
The space complexity of Bubble Sort is O(1) because it requires a constant amount of additional space to store temporary variables for swapping elements. Bubble Sort performs in-place sorting, meaning it does not require any extra space proportional to the input size. It operates directly on the given array, making it memory-efficient.

# Use Cases 
Bubble Sort is a simple sorting algorithm with a time complexity of O(n^2), making it less efficient compared to more advanced sorting algorithms like Quick Sort or Merge Sort. However, it can still be useful in certain scenarios, including:

1. Educational Purposes: Bubble Sort is often taught as an introductory sorting algorithm due to its simplicity and ease of understanding. It helps beginners grasp the concept of sorting and how swapping elements works.

2. Small Input Sizes: When dealing with small input sizes or nearly sorted arrays, Bubble Sort can be a reasonable choice. Its simplicity makes it easier to implement and debug for small datasets.

3. Partially Sorted Arrays: If an array is partially sorted or has only a few out-of-place elements, Bubble Sort can be effective. It performs multiple passes, gradually moving larger elements towards the end of the array, which can improve the sorting efficiency in such cases.

4. Online Streaming or Real-Time Data: Bubble Sort is useful in scenarios where data is arriving in real-time or through online streaming. It allows for sorting as new data comes in, providing a basic sorting mechanism in dynamic environments.

It is important to note that Bubble Sort is generally not recommended for large-scale or performance-critical applications. Other sorting algorithms with better time complexity, such as Quick Sort or Merge Sort, are preferred for larger datasets.

# Function Description

This function compares adjacent elements and swaps them if they are in the wrong order

    void bubblesort(int array[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size-i-1; j++) {
            if (array[j] > array[j+1]){
                swap(array[j],array[j+1]);
            }
        }
    }
    }
    
First we create an array and take input of the elements of the array and the number of elements to be taken is determined by n

    int main () {
     int array[100];
     int n;
     cout << "Enter the size of the array : ";
     cin >> n;
     cout << "Enter the elements of the array : ";
     for (int i = 0; i < n; i++) {
        cin >> array[i];
     }
    
  After that we call the function bubblesort
        
     bubblesort(array,n);
  Then we print the sorted array
  
    cout << "Printing the sorted array : ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
     }
    }
