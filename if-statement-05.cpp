// This program checks if the entered year is a century year.(divisible by 100) using an if statement.
#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"entre the year:";
    cin>>year;

    if(year%100==0){
        cout<<"it is a century year"<<endl;
    }
}
