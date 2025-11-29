#include <iostream>
#include <string>
using namespace std;

int main() {
    string employees[] = {"Alice", "Bob", "Charlie", "David", "Esha"};
    int n = 5;

    string name;
    cout << "Enter employee name to search: ";
    cin >> name;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (employees[i] == name) {
            cout << name << " exists in the employee list at index " << i << ".\n";
            found = true;
            break;
        }
    }
    if (!found) {
        cout << name << " does not exist in the employee list.\n";
    }

    return 0;
}

