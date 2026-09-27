//the program to check if a number is divisible by 5 or not.
#include<iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if(number%5==0){
        cout<<"the number is disible is 5"<<endl;

    }
    else{
        cout<<"the number is not disible is 5"<<endl;
    }
}