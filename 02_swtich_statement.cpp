//c++ program that takes a traffic light color (R, Y, G) and prints the corresponding action using switch statement
#include<iostream>
using namespace std;
int main()
{
char choise;
cout<<"entre traffic light color(R, Y, G):";
cin>>choise;

switch(choise)
{
    case 'R':
    case 'r':
        cout<<"stop";
        break;
    case 'Y':
    case 'y':
        cout<<"ready";
        break;
    case 'G':
    case 'g':
        cout<<"go";
        break;
    default:
        cout<<"invalid choice";
}
}