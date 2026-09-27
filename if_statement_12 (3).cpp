#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"entre three numbers:";
    cin>>num1>>num2>>num3;

    if(num1<=num2 && num1<=num3){
        cout<<"smallest number is:"<<num1<<endl;
    }
    if(num2<=num1 && num2<=num3){
        cout<<"smallest number is:"<<num2<<endl;
    }
    if(num3<=num1 && num3<=num2){
        cout<<"smallest number is:"<<num3<<endl;
    }
}
