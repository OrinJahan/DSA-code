#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of book IDs: ";
    cin >> n;

    int arr[100];
    cout << "Enter the sorted book IDs: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int newArr[100];
    int j = 0;

    newArr[j++] = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            newArr[j++] = arr[i];
        }
    }

    cout << "Cleaned list (without duplicates): ";
    for (int i = 0; i < j; i++) {
        cout << newArr[i] << " ";
    }

    return 0;
}

