//c++ program that takes a coffee size (1-3) and prints the corresponding size using switch statement
#include<iostream>
using namespace std;
int main()
{
    int choice;
    cout<<"entre a coffee size (1-3):";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"small";
            break;
        case 2:
            cout<<"medium";
            break;
        case 3:
            cout<<"large";
            break;
        default:
            cout<<"invalid choice";
    }
}