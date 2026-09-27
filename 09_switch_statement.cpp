// c++ program that takes a shipping method (1-3) and prints the corresponding shipping method name using switch statement
#include<iostream>
using namespace std;
int main()
{
    int choice;
    cout<<"entre a shipping method (1-3):";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"standard shipping";
            break;
        case 2:
            cout<<"express shipping";
            break;
        case 3:
            cout<<"overnight shipping";
            break;
        default:
            cout<<"invalid choice";
    }
}