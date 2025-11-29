#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeDescending(vector<int> &A, vector<int> &B) {
    int i = A.size() - 1;
    int j = B.size() - 1;
    vector<int> result;
    while (i >= 0 && j >= 0) {
        if (A[i] >= B[j]) {
            result.push_back(A[i]);
            i--;
        } else {
            result.push_back(B[j]);
            j--;
        }
    }
    while (i >= 0) {
        result.push_back(A[i]);
        i--;
    }
    while (j >= 0) {
        result.push_back(B[j]);
        j--;
    }
    return result;
}
int main() {
    vector<int> arr1 = {1, 4, 7};
    vector<int> arr2 = {2, 5, 6};

    vector<int> merged = mergeDescending(arr1, arr2);

    cout << "Merged array in descending order: ";
    for (int num : merged) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
