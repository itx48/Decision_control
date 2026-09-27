//c++ program that takes an operator (+, -, *, /) and two numbers and performs the corresponding arithmetic operation using switch statement
#include<iostream>
using namespace std;
int main()
{
    char op;
    double num1, num2;

    cout<<"entre operator (+, -, *, /):";
    cin>>op;

    cout<<"entre first number:";
    cin>>num1;

    cout<<"entre second number:";
    cin>>num2;

    switch(op)
    {
        case '+' :
        cout << "The result of " << num1 + num2 ;
        break;
        case '-' :
        cout << "The result of " << num1 - num2 ;
        break;
        case '*' :
        cout << "The result of " << num1 * num2 ;
        break;
        case '/' :
        if(num2!=0)
        cout << "The result of " << num1 / num2 ;
        else
        cout << "Division by zero is not allowed.";
        break;
        default:
        cout << "Invalid operator";
    }

}