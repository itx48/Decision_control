#include <iostream>
using namespace std;

int main() {
    double income;
    int creditScore;

    cout << "Enter your income: ";
    cin >> income;

    cout << "Enter your credit score: ";
    cin >> creditScore;

    if (income > 50000) {
        
        if (creditScore > 700) {
            cout << "Loan Approved!" << endl;
        } 
        else {
            cout << "Loan Rejected!." << endl;
        }
        
    } 
    else {
        cout << "Loan Rejected! Income 50,000 is less." << endl;
    }
}
