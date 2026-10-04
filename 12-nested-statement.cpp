// C++ program that takes shopping bill amount as input from user and checks whether the bill is above 5000 or not using nested if statement
#include <iostream>
using namespace std;

int main() {
    double billAmount;
    char hasCard;

    cout << "Enter shopping bill amount: ";
    cin >> billAmount;

    if (billAmount > 5000.0) {
        cout << "Do you have a membership card? (y/n): ";
        cin >> hasCard;

        if (hasCard == 'y' || hasCard == 'Y') {
            cout << "Extra discount applied! Final bill after discount: " << billAmount * 0.9 << endl;
        } else {
            cout << "No membership card. Standard bill: " << billAmount << endl;
        }
    } else {
        cout << "Bill is 5000 or below. No extra discount." << endl;
    }