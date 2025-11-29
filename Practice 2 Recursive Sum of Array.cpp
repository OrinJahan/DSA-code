#include <iostream>
using namespace std;

int recursiveSum(int arr[], int n) {
    if (n <= 0) return 0;
    return arr[n - 1] + recursiveSum(arr, n - 1);
}

int main() {
    int numbers[] = {2, 4, 6, 8, 10};
    int n = 5;
    cout << "Sum of array = " << recursiveSum(numbers, n) << endl;

    return 0;
}
