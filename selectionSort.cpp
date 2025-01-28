#include <iostream>
using namespace std;

void selectionSort(int a[], int n) {
    for (int i = 0; i < n; i++) {
        int targetIndex = i;
        cout << "Pass " << i + 1 << ": " << endl;
        
        // Finding the smallest element in the unsorted part
        for (int j = i + 1; j < n; j++) {
            cout << "  Comparing " << a[j] << " with " << a[targetIndex] << endl;
            if (a[j] < a[targetIndex]) {
                targetIndex = j;
            }
        }
        
        // Swapping the smallest element with the current element
        if (targetIndex != i) {
            cout << "  Swapping " << a[i] << " and " << a[targetIndex] << endl;
            swap(a[i], a[targetIndex]);
        } else {
            cout << "  No swapping needed for index " << i << endl;
        }

        // Printing the array after each pass
        cout << "  Array after pass " << i + 1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << a[k] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int a[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Sorting process:" << endl;
    selectionSort(a, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

