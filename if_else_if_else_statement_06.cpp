// C++ program to determine BMI category based on user input.(owerweight, underweight, normal weight, obese)
#include<iostream>
using namespace std;
int main()
{
    double bmi;
    cout<<"Enter your BMI score: ";
    cin>>bmi;

    if(bmi<18.5)
    {
        cout<<"You are underweight"<<endl;
    }
    else if(bmi>=18.5 && bmi<=24.9)
    {
        cout<<"You have a normal weight"<<endl;
    }
    else if(bmi>=25 && bmi<=29.9)
    {
        cout<<"You are overweight"<<endl;
    }
    else if(bmi>=30)
    {
        cout<<"You are obese"<<endl;
    }
    else{
    
         cout<<"Invalid BMI score"<<endl;
   
}
}