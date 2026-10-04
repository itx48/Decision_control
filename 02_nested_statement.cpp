// C++ program to find the largest number among three numbers using nested if statement
#include<iostream>
using namespace std;
int main()
{
    double num1, num2, num3;
    cout<<" entre a three number"<<endl;
    cin>>num1>>num2>>num3;

    if(num1>=num2){
     if(num1>=num3){
        cout<<" the largest numberis"<< num1<<endl;
    }
    else{
        cout<<" the largest number is"<< num3<<endl;
    }
    }
    else{
        if(num2>=num3){
            cout<<" the largest number is"<< num2<<endl;
        }
        else{
            cout<<" the largest number is"<< num3<<endl;
        }
    }
}