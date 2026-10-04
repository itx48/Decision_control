//c++ program that takes two numbers as input from user and checks whether both numbers are positive or not using nested if statement
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    if (num1 > 0 && num2 > 0) {
        cout << "Both numbers are positive!" << endl;
        if (num1 > num2) {
            cout << num1 << " is greater than " << num2 << endl;
        } else if (num2 > num1) {
            cout << num2 << " is greater than " << num1 << endl;
        } else {
            cout << "Both numbers are equal!" << endl;
        }
    } else {
        cout << "Both numbers are not positive." << endl;
    }