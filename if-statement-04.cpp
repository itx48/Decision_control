// This program checks if the entered password length is less than 8 characters.
#include<iostream>
using namespace std;
int main()
{
    int length;
    cout<<"entre the password length:";
    cin>>length;

    if(length<8){
        cout<<"password is too short"<<endl;
    }
}