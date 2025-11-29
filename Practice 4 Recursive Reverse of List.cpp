#include <iostream>
#include <string>
using namespace std;

void reverseList(int arr[], int start, int end) {
    if (start >= end) return;
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reverseList(arr, start + 1, end - 1);
}

void reverseList(string arr[], int start, int end) {
    if (start >= end) return;
    string temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reverseList(arr, start + 1, end - 1);
}

int main() {
    cout << "---- Reverse Integers ----\n";
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = 5;

    reverseList(arr1, 0, n1 - 1);

    cout << "Reversed integer array: ";
    for (int i = 0; i < n1; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    cout << "\n---- Reverse Strings ----\n";
    string arr2[] = {"apple", "banana", "cherry", "date"};
    int n2 = 4;

    reverseList(arr2, 0, n2 - 1);

    cout << "Reversed string array: ";
    for (int i = 0; i < n2; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}

