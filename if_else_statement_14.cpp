//take a number from user and check whether it is greater than 100 or not
#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<< "Enter a number: ";
    cin>>number;
    if(number>100){
        cout<<"the number is greater than 100"<<endl;
    }
    else{
        cout<<"the number is not greater than 100"<<endl;
    }
}