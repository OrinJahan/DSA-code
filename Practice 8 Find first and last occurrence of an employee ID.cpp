#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int x) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) {
            result = mid;
            high = mid - 1;
        }
        else if (arr[mid] > x) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return result;
}

int lastOccurrence(int arr[], int n, int x) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) {
            result = mid;
            low = mid + 1;
        }
        else if (arr[mid] > x) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return result;
}

int main() {
    int n, x;
    cout << "Enter number of employees: ";
    cin >> n;

    int arr[100];
    cout << "Enter sorted employee IDs: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter employee ID to search: ";
    cin >> x;

    int first = firstOccurrence(arr, n, x);
    int last = lastOccurrence(arr, n, x);

    if (first == -1)
        cout << "Employee ID not found." << endl;
    else {
        cout << "First occurrence at index: " << first << endl;
        cout << "Last occurrence at index: " << last << endl;
    }

    return 0;
}

