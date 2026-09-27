// This program checks whether a number is positive, negative, or zero.
#include<iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number >0){
        cout <<"the number is positive"<<endl;
    }
    else if (number < 0){
        cout <<"the number is negative"<<endl;
    }
    else{
        cout <<"the number is zero"<<endl;
    }
}