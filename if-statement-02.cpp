//write a program taht takes temperature.if temperature is above 40 then print "temperature is above" otherwise print "temperature is below"
#include<iostream>
using namespace std;
int main()
{
    int temp;
    cout<<"entre the temperature:";
    cin>>temp;

    if(temp > 40){
    cout<<"it is too hot outside"<<endl;
    }
return 0;
    }