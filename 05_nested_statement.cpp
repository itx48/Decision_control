// C++ program to check whether a year is leap year or not
#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"entre your year"<<endl;
    cin>>year;

    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                cout<<"your year is leap year"<<endl;
            }
            else{
                cout<<"your year is not leap year"<<endl;
            }
        }
        else{
            cout<<"your year is leap year"<<endl;
        }
    }
    else{
        cout<<"your year is not leap year"<<endl;
    }
}