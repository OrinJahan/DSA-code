#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;
    cout << "Enter size of second array: ";
    cin >> n2;

    int arr1[100], arr2[100], result[200]; // fixed size for simplicity
    int i, j, k;

    cout << "Enter elements of first array (sorted ascending): ";
    for (i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter elements of second array (sorted ascending): ";
    for (j = 0; j < n2; j++) {
        cin >> arr2[j];
    }

    i = n1 - 1;
    j = n2 - 1;
    k = 0;
    while (i >= 0 && j >= 0) {
        if (arr1[i] >= arr2[j]) {
            result[k++] = arr1[i--];
        } else {
            result[k++] = arr2[j--];
        }
    }
    while (i >= 0) {
        result[k++] = arr1[i--];
    }
    while (j >= 0) {
        result[k++] = arr2[j--];
    }
    cout << "Merged array in descending order: ";
    for (int x = 0; x < k; x++) {
        cout << result[x] << " ";
    }
    cout << endl;

    return 0;
}
