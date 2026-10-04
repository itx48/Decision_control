// C++ program that takes a number as input from user and checks whether the number is even or odd using nested if statement
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "The number is even." << endl;
        if (num > 50) {
            cout << "And it is greater than 50!" << endl;
        } else {
            cout << "But it is not greater than 50." << endl;
        }
    } else {
        cout << "The number is odd." << endl;
    }