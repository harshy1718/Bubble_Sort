#include <iostream>
using namespace std;

void bubblesort(int array[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size-i-1; j++) {
            if (array[j] > array[j+1]){
                swap(array[j],array[j+1]);
            }
        }
    }
}

int main () {
    int array[100];
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    bubblesort(array,n);
    cout << "Printing the sorted array : ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
}