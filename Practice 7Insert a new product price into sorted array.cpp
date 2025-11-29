#include <iostream>
using namespace std;

int main() {
    int n, price;
    cout << "Enter number of products: ";
    cin >> n;

    int arr[100];
    cout << "Enter sorted prices: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter new product price: ";
    cin >> price;

    int i;
    for (i = n - 1; (i >= 0 && arr[i] > price); i--) {
        arr[i + 1] = arr[i];
    }
    arr[i + 1] = price;
    n++;

    cout << "Updated sorted prices: ";
    for (int j = 0; j < n; j++) {
        cout << arr[j] << " ";
    }

    return 0;
}

