// C++ program to calculate profit or loss based on cost price and selling price.
#include<iostream>
using namespace std;
int main()
{
double sp,cp;
cout<<"entre cost price: ";
cin>>cp;
cout<<"entre selling price: ";
cin>>sp;

if(sp>cp){
    double profit=sp-cp;
    cout<<"profit is: "<<profit<<endl;
}
else if(sp<cp){
    double loss=cp-sp;
    cout<<"loss is: "<<loss<<endl;
}
else{
    cout<<"no profit no loss"<<endl;


}

}