//c++ program that takes a currency code (1-3) and prints the corresponding currency using switch statement
#include<iostream>
using namespace std;
int main()
{
    int choice;
    cout<<"entre a currency code (1-3):";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"USD";
            break;
        case 2:
            cout<<"EUR";
            break;
        case 3:
            cout<<"PKR";
            break;
        default:
            cout<<"invalid choice";
    }
}