// C++ program to determine age group based on user input.
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    if(age>=10 && age<=16){
        cout<<" child"<<endl;

    }
    else if (age>=18 && age<=25){
        cout<<" teenager"<<endl;
    }
    else if (age>=18 && age<=30){
        cout<<"adult"<<endl;
    }
    else if (age>=30 && age<=50){
        cout<<" middle-aged"<<endl;
    }
    else{
        cout<<" senior"<<endl;
    
    }
}