// c++ program that takes a clothing size (S, M, L, XL) and prints the corresponding size name using switch statement
#include<iostream>
using namespace std;
int main()
{
    char choice;
    cout<<"entrea clothing size (S, M, L, XL,):";
    cin>>choice;

    switch(choice)
    {
        case 'S':
        case 's':
            cout<<"small";
            break;
        case 'M':
        case 'm':
            cout<<"medium";
            break;
        case 'L':
        case 'l':
            cout<<"large";
            break;
        case 'X':
        case 'x':
            cout<<"extra large";
            break;
        default:
            cout<<"invalid choice";
    }
}