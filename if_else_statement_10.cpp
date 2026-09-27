// This program checks if the user is eligible for a driving licence.
#include<iostream>
using namespace std;
int main()
{
    double age;
    cout << "Enter your age: ";
    cin >> age;

    if(age>=18)
    {
        cout << "You are eligible the driving licence." << endl;
    }
    else
    {
        cout << "You are not eligible the driving licence." << endl;
    }
}