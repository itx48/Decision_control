//c++ program that takes marks and attendance as input from user and checks whether the student is pass or fail using nested if statement
#include<iostream>
using namespace std;
int main()
{
    int marks;
    float attendance;
    cout<<"entre your marks"<<endl;
    cin>>marks;
    cout<<"entre your presented"<<endl;
    cin>>attendance;
    if(marks>=50){
    if(attendance>=75){
        cout<<"your are pass"<<endl;
    }
    else{
        
        cout<<"your are fail attendance is less than 75%"<<endl;
    }
    }
    else{
        cout<<"your are fail marks is less than 50%"<<endl;
    }
}
