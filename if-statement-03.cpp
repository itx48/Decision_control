//write aprogram that takes a person's balance.if the balance is less than 0
#include<iostream>
using namespace std;
int main()
{
    int balance;
    cout<<"entre your balance:";
    cin>>balance;

    if(balance < 0){
        cout<<"acount is in debt"<<endl;
    }

}