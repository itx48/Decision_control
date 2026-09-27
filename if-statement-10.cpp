// This program checks if the speed is above 120 and issues a warning if it is.
#include<iostream>
using namespace std;
int main()
{
    int speed;
    cout<<"Enter the car's speed:";
    cin>>speed;
    
    if(speed>120){
        cout<<"speeding ticket warning"<<endl;
    }
}