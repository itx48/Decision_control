// C++ program to check the type of a character input by the user.lowercase letter, uppercase letter, digit, special character.

#include <iostream>
using namespace std;

int main() {
    char ch;
    
    cout << "Enter any character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        cout << "Yeh aik Lowercase letter hai!" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z') {
        cout << "Yeh aik Uppercase letter hai!" << endl;
    }
    else if (ch >= '0' && ch <= '9') {
        cout << "Yeh aik Digit (number) hai!" << endl;
    }
    else {
        cout << "Yeh aik Special Character hai!" << endl;
    }

    return 0;
}