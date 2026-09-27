//program to check if a number is divisible by both 3 and 7
#include<iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if(number%3==0 && number%7==0){
        cout<<"the number is disible is 3 or 7"<<endl;

    }
    else{
        cout<<"the number is not disible is 3 or 7"<<endl;
    }
}