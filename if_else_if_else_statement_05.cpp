// This program takes electricity unit consumed as input and categorizes it into high, medium, low, or very low.
#include<iostream>
using namespace std;
int main()
{
    int electricity;
    cout<<"Enter electricity unit consumed: ";
    cin>>electricity;

    if(electricity>300){
        cout<<"electicity unit is high"<<endl;
    }
    else if(electricity>200 && electricity<=300){
        cout<<"electicity unit is medium"<<endl;
    }
    else if(electricity>100 && electricity<=200){
        cout<<"electicity unit is low"<<endl;
    }
    else{
        cout<<"electicity unit is very low"<<endl;
    }
}
