//program to check if a student has passed or failed based on their marks
#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if(marks>=50){
        cout << "Congratulations! " << "You have passed." << endl;
    }
     else{
        cout << "Sorry, " << "You have failed." << endl;
    }
}