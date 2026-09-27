// C++ program to calculate income tax based on salary input by the user.
#include <iostream>
using namespace std;

int main() {
    double salary, tax = 0;
    
    cout << "Enter your annual salary: ";
    cin >> salary;

    if (salary > 2000000) {
        tax = salary * 0.20; // 20% tax
        cout << "Tax Slab: 20%" << endl;
    }
    else if (salary > 1200000) {
        tax = salary * 0.15; // 15% tax
        cout << "Tax Slab: 15%" << endl;
    }
    else if (salary > 600000) {
        tax = salary * 0.05; // 5% tax
        cout << "Tax Slab: 5%" << endl;
    }
    else {
        tax = 0;
        cout << "Tax Slab: 0% (No tax)" << endl;
    }

    cout << "Total Income Tax to pay: " << tax << endl;

    return 0;
}