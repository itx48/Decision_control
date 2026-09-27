// This program checks if the temperature is below freezing point or above it.
#include<iostream>
using namespace std;
int main()
{
    double temp;
    cout << "Enter the temperature: ";
    cin >> temp;

    if(temp < 0){
        cout << "The temperature is freezing point." << endl;
    }
    else{
        cout << "The temperature is above"<<endl;
    }
}