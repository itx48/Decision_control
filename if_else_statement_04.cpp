// C++ program to find the largest and smallest number among two numbers
#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if(num1 >= num2){
        cout<<"the larger number is "<<num1<<endl;
        cout<<"the smallest number is "<<num2<<endl;
    }
   else {
         cout<<"the larger number is"<<num2<<endl;
         cout<<"the smallest number is"<<num1<<endl;   
}
}