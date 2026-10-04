// C++ program that takes temperature as input from user and checks whether it is below 15 degrees Celsius or not using nested if statement
#include <iostream>
using namespace std;

int main() {
    float temp;
    char isRaining;

    cout << "Enter temperature (in Celsius): ";
    cin >> temp;

    if (temp < 15) {
        cout << "Is it raining? (y/n): ";
        cin >> isRaining;

        if (isRaining == 'y' || isRaining == 'Y') {
            cout << "Wear a heavy waterproof jacket!" << endl;
        } else {
            cout << "Wear a light sweater!" << endl;
        }
    } else {
        cout << "Temperature is above 15. No heavy jacket needed." << endl;
    }