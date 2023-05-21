# Bubble_Sort
This repository contains a concise and efficient C++ implementation of Bubble Sort, a simple sorting algorithm that repeatedly compares adjacent elements and swaps them if they are in the wrong order.

void bubblesort(int array[], int size) {
// this function compares adjacent elements and swaps them if they are in the wrong order

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size-i-1; j++) {
            if (array[j] > array[j+1]){
                swap(array[j],array[j+1]);
            }
        }
    }
}

int main () {
//first we create an array and take input of the elements of the array and the number of elements to be taken is determined by n

    int array[100];
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    
    // after that we call the function bubblesort
    bubblesort(array,n);
    // then we print the sorted array
    cout << "Printing the sorted array : ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
}
