#include <iostream>
using namespace std;

int findMedian(int a[], int n, int b[], int m) {
    int merged[200];
    int i=0, j=0, k=0;

    while(i<n && j<m) {
        if(a[i] < b[j]) merged[k++] = a[i++];
        else merged[k++] = b[j++];
    }
    while(i<n) merged[k++] = a[i++];
    while(j<m) merged[k++] = b[j++];

    int total = n+m;
    if(total % 2 == 1) return merged[total/2];
    else return (merged[(total/2)-1] + merged[total/2]) / 2;
}

int main() {
    int n, m;
    cout << "Enter size of first array: ";
    cin >> n;
    int a[100];
    cout << "Enter sorted elements: ";
    for(int i=0; i<n; i++) cin >> a[i];

    cout << "Enter size of second array: ";
    cin >> m;
    int b[100];
    cout << "Enter sorted elements: ";
    for(int i=0; i<m; i++) cin >> b[i];

    cout << "Median = " << findMedian(a, n, b, m);
}

