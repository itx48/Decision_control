// c++ program that takes a department code (CS, SE, IT, BBA, EE) and prints the corresponding department name using switch statement
#include<iostream>
using namespace std;
int main()
{
    char choice;
    cout<<"entre a department code (CS,SE,IT,BBA,EE)";
    cin>>choice;

    switch(choice)
    {
        case 'C':
        case 'c':
            cout<<"computer science";
            break;
        case 'S':
        case 's':
            cout<<"software engineering";
            break;
        case 'I':
        case 'i':
            cout<<"information technology";
            break;
        case 'B':
        case 'b':
            cout<<"bachelor of business administration";
            break;
        case 'E':
        case 'e':
            cout<<"electrical engineering";
            break;
        default:
            cout<<"invalid choice";
    }
}