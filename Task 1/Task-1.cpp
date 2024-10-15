#include <iostream>
using namespace std;

template <typename T>
void printArray(T arr, int size) {
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i < size-1)
        {
            cout << ", ";
        }
        else {
            cout << endl;
        }
    }
}

template <typename T>
void selectionSort(T arr, int size) {

}

int main() {
    int intArray[5] = { 64, 25, 12, 22, 11 };
    cout << "Original integer array: ";
    printArray(intArray, sizeof(intArray) / sizeof(intArray[0]));
    selectionSort(intArray, sizeof(intArray) / sizeof(intArray[0]));
    cout << "Sorted integer array: ";
    printArray(intArray, sizeof(intArray) / sizeof(intArray[0]));

    string stringArray[4] = { "apple", "orange", "banana", "grape" };
    cout << "\nOriginal string array: ";
    printArray(stringArray, sizeof(stringArray) / sizeof(stringArray[0]));
    selectionSort(stringArray, sizeof(stringArray) / sizeof(stringArray[0]));
    cout << "Sorted string array: ";
    printArray(stringArray, sizeof(stringArray) / sizeof(stringArray[0]));

    return 0;
}