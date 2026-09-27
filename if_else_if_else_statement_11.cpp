// C++ program to determine the time of day based on user input (morning, afternoon, evening, night)
#include<iostream>
using namespace std;
int main()
{
    int hour;
    cout<<"entre a hour: ";
    cin>>hour;

    if(hour>=6 && hour<12){
        cout<<"good morning"<<endl;
    }
    else if(hour>=12 && hour<18){
        cout<<"good afternoon"<<endl;
    }
    else if(hour>=18 && hour<24){
        cout<<"good evening"<<endl;
    }
    else if(hour>=0 && hour<6){
        cout<<"good night"<<endl;
    }
    else{
        cout<<"invalid hour"<<endl;
    
    }
}