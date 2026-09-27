//write a program to check whether the number is valid or not. A number is valid if it is positive and even(divisible by 2).
#include<iostream>
using namespace std;
int main4()
{
    int number;
    cout<<"entre a number:";
    cin>>number;

    if(number>=0 && number %2==0){
        cout<<"valid number"<<endl;

    }
}