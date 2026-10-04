#include <iostream>
using namespace std;

int main() {
    double balance, withdrawalAmount;
    double dailyLimit = 25000.0;

    cout << "Enter your account balance: ";
    cin >> balance;
    
    cout << "Enter withdrawal amount: ";
    cin >> withdrawalAmount;


    if (withdrawalAmount <= balance) {
        
    
        if (withdrawalAmount <= dailyLimit) {
            cout << "Transaction successful! Please collect your cash." << endl;
            balance -= withdrawalAmount;
            cout << "Remaining balance: " << balance << endl;
        } 
        else {
            cout << "Transaction failed! Amount exceeds your daily withdrawal limit." << endl;
        }
        
    } 
    else {
        cout << "Transaction failed! Insufficient balance in your account." << endl;
    }
}