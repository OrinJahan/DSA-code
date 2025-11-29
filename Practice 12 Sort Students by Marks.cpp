#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int marks;
};

void swap(Student &a, Student &b) {
    Student temp = a;
    a = b;
    b = temp;
}

void sortStudents(Student s[], int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(s[i].marks < s[j].marks ||
               (s[i].marks == s[j].marks && s[i].name > s[j].name)) {
                swap(s[i], s[j]);
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Student s[100];
    for(int i=0; i<n; i++) {
        cout << "Enter name and marks: ";
        cin >> s[i].name >> s[i].marks;
    }

    sortStudents(s, n);

    cout << "\nSorted list:\n";
    for(int i=0; i<n; i++) {
        cout << s[i].name << " " << s[i].marks << endl;
    }
}

