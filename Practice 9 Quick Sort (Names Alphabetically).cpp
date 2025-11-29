#include <iostream>
#include <string>
using namespace std;

void swap(string &a, string &b) {
    string temp = a;
    a = b;
    b = temp;
}

int partition(string arr[], int low, int high) {
    string pivot = arr[high];
    int i = low - 1;
    for(int j = low; j < high; j++) {
        if(arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i+1;
}

void quickSort(string arr[], int low, int high) {
    if(low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    string names[100];
    cout << "Enter names:\n";
    for(int i=0; i<n; i++) cin >> names[i];

    cout << "\nBefore sorting:\n";
    for(int i=0; i<n; i++) cout << names[i] << " ";

    quickSort(names, 0, n-1);

    cout << "\n\nAfter sorting:\n";
    for(int i=0; i<n; i++) cout << names[i] << " ";
}

