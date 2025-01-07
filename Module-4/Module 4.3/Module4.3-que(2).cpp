// Write a program of to sort the array using templates.

#include <iostream>
using namespace std;

template <typename T>
void bubbleSort(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <typename T>
void displayArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArr[] = {64, 34, 25, 12, 22, 11, 90};
    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    cout << "Original integer array: ";
    displayArray(intArr, intSize);
    bubbleSort(intArr, intSize);
    cout << "Sorted integer array: ";
    displayArray(intArr, intSize);
    
    float floatArr[] = {64.5, 34.7, 25.3, 12.6, 22.9};
    int floatSize = sizeof(floatArr) / sizeof(floatArr[0]);
    cout << "\nOriginal float array: ";
    displayArray(floatArr, floatSize);
    
    bubbleSort(floatArr, floatSize);
    cout << "Sorted float array: ";
    displayArray(floatArr, floatSize);

    double doubleArr[] = {64.99, 34.56, 25.1, 12.78, 22.3};
    int doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);
    cout << "\nOriginal double array: ";
    displayArray(doubleArr, doubleSize);
    
    bubbleSort(doubleArr, doubleSize);
    cout << "Sorted double array: ";
    displayArray(doubleArr, doubleSize);

    return 0;
}

