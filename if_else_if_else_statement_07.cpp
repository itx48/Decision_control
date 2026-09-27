// C++ program that asssigns letter grades based on user input.(A, B, C, D, F)based on student marks.
#include<iostream>
using namespace std;
int main()
{
    double grade;
    cout<<"Enter your grade: ";
    cin>>grade;

    if(grade>=90){
        cout<<"you grade is A"<<endl;
    }
    else if (grade>=80){
        cout<<"you grade is B"<<endl;
    }
else if (grade>=60){
        cout<<"you grade is C"<<endl;
    }
    else if (grade>=50){
        cout<<"you grade is D"<<endl;
    }
    else{
        cout<<"you grade is F"<<endl;
    
    }
}