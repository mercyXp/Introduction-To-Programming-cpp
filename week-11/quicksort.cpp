#include <iostream>

using namespace std;

// Function to swap elements
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to rearrange array (find the partition point)
int partition(int array[], int low, int high) {
    //rightmost element as pivot
    int pivot = array[high];
    int i = (low - 1); // Pointer for the greater element

    // Traverse each element of the array
    for (int j = low; j < high; j++) {
        if (array[j] <= pivot) {
            i++; 
            swap(array[i], array[j]); 
        }
    }
    swap(array[i + 1], array[high]); 
    return (i + 1); 
}

// QuickSort function
void quickSort(int array[], int low, int high) {
    if (low < high) {
        int pi = partition(array, low, high); // Find the pivot element

        // Recursive calls on the left and right of the pivot
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

// Main function
int main() {
    int n;
    cin >> n; // Read the number of elements

    // Declare a static array with a maximum size
    int array[100000]; // Maximum size based on constraints

    // Read the elements of the array
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    quickSort(array, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0; 
}