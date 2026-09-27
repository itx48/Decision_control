// This program checks if a number is even or odd using an if statement.
#include<iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "Even number" << endl;
    }
    return 0;
}