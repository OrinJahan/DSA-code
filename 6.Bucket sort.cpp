#include <iostream>
#include <cmath>
using namespace std;

void insertionSort(float arr[], int n) {
    for (int i = 1; i < n; i++) {
        float key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void bucketSort(float arr[], int n) {
    const int numBuckets = 10;

    float lowest = arr[0], highest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < lowest) lowest = arr[i];
        if (arr[i] > highest) highest = arr[i];
    }
    float buckets[numBuckets][n];
    int bucketCount[numBuckets];

    for (int i = 0; i < numBuckets; i++) {
        bucketCount[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        int index = floor(((arr[i] - lowest) / (highest - lowest)) * numBuckets);
        if (index >= numBuckets) index = numBuckets - 1;
        buckets[index][bucketCount[index]++] = arr[i];
    }
    for (int i = 0; i < numBuckets; i++) {
        if (bucketCount[i] > 0) {
            insertionSort(buckets[i], bucketCount[i]);
        }
    }
    int k = 0;
    for (int i = 0; i < numBuckets; i++) {
        for (int j = 0; j < bucketCount[i]; j++) {
            arr[k++] = buckets[i][j];
        }
    }
}
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    float arr[n];
    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bucketSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
