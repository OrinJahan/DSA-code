#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }

    return -1;
}

int main() {
    int products[] = {101, 205, 333, 444, 555, 678, 789};
    int n = 7;

    int productID;
    cout << "Enter product ID to search: ";
    cin >> productID;

    int index = binarySearch(products, n, productID);

    if (index != -1) {
        cout << "Product ID " << productID << " found at index " << index << ".\n";
    } else {
        cout << "Product ID " << productID << " not found in inventory.\n";
    }

    return 0;
}

