#include <iostream>
using namespace std;

// Function to perform Insertion Sort
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Function to perform Selection Sort
void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

// Function to perform Bubble Sort
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void merge(int A[], int sizeA, int B[], int sizeB, int merged[]) {
    int i = 0, j = 0, k = 0;

    while (i < sizeA && j < sizeB) {
        if (A[i] < B[j]) {
            merged[k++] = A[i++];
        } else {
            merged[k++] = B[j++];
        }
    }

    while (i < sizeA) {
        merged[k++] = A[i++];
    }

    while (j < sizeB) {
        merged[k++] = B[j++];
    }
}

int main() {
    int A[] = {34, 45, 12, 11, 16, 90};
    int B[] = {18, 43, 12, 55, 28, 30};
    int sizeA = sizeof(A) / sizeof(A[0]);
    int sizeB = sizeof(B) / sizeof(B[0]);

    insertionSort(A, sizeA);
    bubbleSort(B, sizeB);

    int merged[sizeA + sizeB];
    merge(A, sizeA, B, sizeB, merged);

    cout << "Sorted Array A: ";
    for (int i = 0; i < sizeA; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    cout << "Sorted Array B: ";
    for (int i = 0; i < sizeB; i++) {
        cout << B[i] << " ";
    }
    cout << endl;

    cout << "Merged Array: ";
    for (int i = 0; i < sizeA + sizeB; i++) {
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}
