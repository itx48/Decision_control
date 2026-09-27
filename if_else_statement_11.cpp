//the following program checks whether the given character is an alphabet or not.
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        cout << ch << " is an alphabet." << endl;
    }
    else
    {
        cout << ch << " is not an alphabet and special character." << endl;
    }
}