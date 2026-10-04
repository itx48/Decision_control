//c++ program that takes age and weight as input from user and checks whether the person is eligible to donate blood or not using nested if statement
#include<iostream>
using namespace std;
int main()
{
    int age;
    double weight;
    cout<<"entre your age and weight"<<endl;
    cin>>age>>weight;

    if(age>=18){
    if(weight>=50){
        cout<<"your are eligible to donate blood"<<endl;
    }
    
    else{
        
        cout<<"your age is less than 18"<<endl;
    }
}   else{
        cout<<"your weight is less than 50"<<endl;
    }

}