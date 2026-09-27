//c++ program that takes a rating (1-5) and prints the corresponding feedback using switch statement
#include<iostream>
using namespace std;
int main()
{
    int choice;
    cout<<"entre a rating (1-5):";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"very bad";
            break;
        case 2:
            cout<<"bad";
            break;
        case 3:
            cout<<"average";
            break;
           case 4:
            cout<<"good";
            break;
            case 5:
            cout<<"excellent";
            break;
            default:
            cout<<"invalid choice";
    }
}