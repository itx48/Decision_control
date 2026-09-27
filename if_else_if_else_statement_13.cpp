// C++ program to calculate library fine based on the number of late days.1
#include <iostream>
using namespace std;

int main() {
    int days;
    double fine = 0;
    
    cout<< "Enter number of late days: ";
    cin >> days;

    
    if (days > 10) {
        fine = days * 50; 
        cout << "Total Fine: " << fine << endl;
    }
    else if (days >= 6 && days <= 10) {
        fine = days * 30; 
        cout << "Total Fine: " << fine << endl;
    }
    else if (days >= 1 && days <= 5) {
        fine = days * 10; 
        cout << "Total Fine: " << fine << endl;
    }
    else if (days == 0) {
        cout << "No fine" << endl;
    }
    else {
        cout << "Invalid input." << endl;
    }
}