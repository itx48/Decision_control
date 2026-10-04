//c++ program that takes user and password as input from user and checks whether the user is valid or not using nested if statement
#include<iostream>
using namespace std;
int main()
{
    char user;
    cout<<"entre user password access"<<endl;
    cin>>user;
    if(user=='a'){
        cout<<"entre your password"<<endl;
        int password;
        cin>>password;
        if(password==1234){
            cout<<"your are access granted"<<endl;
        }
        else{
            cout<<"your are access denied"<<endl;
        }
    }
    else{
        cout<<"your are not a valid user"<<endl;
    }
}