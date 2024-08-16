#include<iostream>
using namespace std;

void bubbleSort(int A[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                swap(A[j], A[j + 1]);
            }
        }
    }
}

void printArray(int A[], int n) {
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    
    cout << "Enter number of array elements: ";
    cin >> n;
    
    int A[n];  // Declare the array after getting the size

    cout << "Enter array elements to be sorted using bubble sort: \n";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << "The array elements are: ";
    printArray(A, n);

    bubbleSort(A, n);

    cout << "Sorted Array: ";
    printArray(A, n);

    return 0;
}
