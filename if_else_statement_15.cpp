//take a pasword as input (string )and use if-else to check whether the password is "granted" or "denied"
#include <iostream>
using namespace std;
int main()
{
    string password;
    cout << "Enter your password: ";
    cin >> password;

    if(password=="1234")
    {
        cout << "Password is access granted." << endl;
    }
    else
    {
        cout << "Password is access denied." << endl;
    }
}