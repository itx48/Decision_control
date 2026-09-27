//c++ program that takes a payment method (1-3) and prints the corresponding payment method using switch statement
#include<iostream>
using namespace std;
int main()
{
 int choice;
 cout<<"entre a payment method (1-3):";
    cin>>choice;
    
    switch(choice)
    {
        case 1:
            cout<<"cash on delivery";
            break;
        case 2:
            cout<<"credit card";
            break;
        case 3:
            cout<<"online method";
            break;
        default:
            cout<<"invalid choice";
    }
}