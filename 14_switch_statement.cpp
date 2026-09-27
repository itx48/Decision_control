//c++ program that takes a restaurant menu choice (1-4) and prints the corresponding item using switch statement
#include <iostream>
using namespace std;

int main()
{
    int choice;
    cout << "Restaurant Menu:\n";
    cout << "1. Burger\n2. Pizza\n3. Pasta\n4. Drinks\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "You selected: Burger";
            break;
        case 2:
            cout << "You selected: Pizza";
            break;
        case 3:
            cout << "You selected: Pasta";
            break;
        case 4:
            cout << "You selected: Drinks";
            break;
        default:
            cout << "Invalid choice!";
    }
    
    return 0;
}