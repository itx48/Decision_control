//c++ program that takes a month number (1-12) and prints the corresponding month name using switch statement
#include<iostream>
using namespace std;
int main()
{
    int choice;
    cout<<"entre a month number (1-12):";
    cin>>choice;

    switch(choice)
    {
        case 1:
        cout<<"january";
        break;
        
        case 2:
        cout<<"february";
        break;
        case 3:
        cout<<"march";
        break;
        case 4:
        cout<<"april";
        break;
        case 5:
        cout<<"may";
        break;
        case 6:
        cout<<"june";
        break;
        case 7:
        cout<<"july";
        break;
        case 8:
        cout<<"august";
        break;
        case 9:
        cout<<"september";
        break;
        case 10:
        cout<<"october";
        break;
        case 11:
        cout<<"november";
        break;
        case 12:
        cout<<"december";
        break;
        default:
        cout<<"invalid choice";
    }


}