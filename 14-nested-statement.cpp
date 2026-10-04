// C++ program that takes age and student status as input from user and calculates ticket price using nested if statement
#include <iostream>
using namespace std;

int main() {
    int age;
    char isStudent;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "Are you a student? (y/n): ";
        cin >> isStudent;

        if (isStudent == 'y' || isStudent == 'Y') {
            cout << "Ticket Price: 500 PKR (Special Student Discount Applied!)" << endl;
        } else {
            cout << "Ticket Price: 1000 PKR (Standard Adult Price)." << endl;
        }
    } 
    else {
        cout << "Ticket Price: 300 PKR (Child Ticket)." << endl;
    }