#include <iostream>
using namespace std;

int main() {
    int n, budget;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[100];
    cout << "Enter sorted array elements: ";
    for(int i=0; i<n; i++) cin >> arr[i];
    cout << "Enter budget: ";
    cin >> budget;

    int i = 0, j = n-1;
    bool found = false;

    while(i < j) {
        int sum = arr[i] + arr[j];
        if(sum == budget) {
            cout << "Pair found: " << arr[i] << " + " << arr[j] << " = " << budget;
            found = true;
            break;
        }
        else if(sum < budget) i++;
        else j--;
    }

    if(!found) cout << "No pair found.";
}

