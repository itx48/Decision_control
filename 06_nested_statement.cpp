//c++ program that takes a character as input from user and checks whether the character is a vowel or not using nested if statement
#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a vowel character: " << endl;
    cin >> ch;

    if (ch == 'a' || ch == 'A') {
        cout << "It is a vowel ('a' or 'A')" << endl;
    } 
    else {
        if (ch == 'e' || ch == 'E') {
            cout << "It is a vowel ('e' or 'E')" << endl;
        } 
        else {
            if (ch == 'i' || ch == 'I') {
                cout << "It is a vowel ('i' or 'I')" << endl;
            } 
            else {
                if (ch == 'o' || ch == 'O') {
                    cout << "It is a vowel ('o' or 'O')" << endl;
                } 
                else {
                    if (ch == 'u' || ch == 'U') {
                        cout << "It is a vowel ('u' or 'U')" << endl;
                    } 
                    else {
                        cout << "It is NOT a vowel (It is a consonant)." << endl;
                    }
                }
            }
        }
    }
}
