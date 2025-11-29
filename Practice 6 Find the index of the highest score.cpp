#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int scores[100];
    cout << "Enter the scores: ";
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    int maxScore = scores[0];
    int index = 0;

    for (int i = 1; i < n; i++) {
        if (scores[i] > maxScore) {
            maxScore = scores[i];
            index = i;
        }
    }

    cout << "Highest score: " << maxScore << endl;
    cout << "Position (index): " << index << endl;

    return 0;
}

