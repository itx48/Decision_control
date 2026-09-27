//c++ program that takes a system role code (1-3) and prints the corresponding role using switch statement
#include <iostream>
using namespace std;

int main()
{
    int choice;
    cout << "Enter system role code (1: Admin, 2: Teacher, 3: Student): ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Role: Administrator";
            break;
        case 2:
            cout << "Role: Teacher";
            break;
        case 3:
            cout << "Role: Student";
            break;
        default:
            cout << "Invalid choice";
    }
    
    return 0;
}