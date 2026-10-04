// C++ program that takes intermediate percentage and entry test marks as input from user and checks whether the student is eligible for admission or not using nested if statement
#include <iostream>
using namespace std;

int main() {
    float interMarks, entryTestMarks;

    cout << "Enter Intermediate percentage: ";
    cin >> interMarks;

    if (interMarks > 60.0) {
        cout << "Enter Entry Test marks (passing/failing status e.g., 50 or above): ";
        cin >> entryTestMarks;

        if (entryTestMarks >= 50.0) {
            cout << "Congratulations! You are eligible for admission." << endl;
        } else {
            cout << "Admission rejected! Failed in entry test marks." << endl;
        }
    } else {
        cout << "Admission rejected! Intermediate marks are below 60%." << endl;
    }