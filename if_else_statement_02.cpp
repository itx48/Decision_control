// This program checks if the user is a teenager based on their age input.
#include <iostream> 
using namespace std;
int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if(age>=13 && age<=19)
    {
        cout << "You are a teenager." << endl;
    }
    else {
        cout << "You are not a teenager." << endl;
    }
    return 0;
}
