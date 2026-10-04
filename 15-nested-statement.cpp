// C++ program that takes citizenship status and age as input from user and checks whether the user is eligible to vote using nested if statement
#include <iostream>
using namespace std;

int main() {
    char isCitizen;
    int age;

    cout << "Are you a citizen? (y/n): ";
    cin >> isCitizen;

    if (isCitizen == 'y' || isCitizen == 'Y') {
        cout << "Enter your age: ";
        cin >> age;
        if (age >= 18) {
            cout << "Congratulations! You are eligible to vote." << endl;
        } 
        else {
            cout << "You are a citizen, but your age is under 18, so you cannot vote." << endl;
        }
    } 
    else {
        cout << "You are not a local citizen." << endl;
    }