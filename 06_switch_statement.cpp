// c++ program that takes a character and checks if it is a vowel (a, e, i, o, u) using switch statement
#include<iostream>
using namespace std;
int main()
{
    char choice;
    cout<<"entre a character is vowel(a, e, i, o, u):";
    cin>>choice;

    switch(choice)
    {
        case 'a':
        case 'A':
            cout<<"it is a vowel";
            break;
        case 'e':
        case 'E':
            cout<<"it is a vowel";
            break;
        case 'i':
        case 'I':
            cout<<"it is a vowel";
            break;
        case 'o':
        case 'O':
            cout<<"it is a vowel";
            break;
        case 'u':
        case 'U':
            cout<<"it is a vowel";
            break;
        default:
            cout<<"it is not a vowel";
    }
}