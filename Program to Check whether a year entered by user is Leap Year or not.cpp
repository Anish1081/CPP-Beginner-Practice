// Write a Program to Check whether a year entered by user is Leap Year or not
#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;
    cout << "Enter a year: " << year << endl;
    
    if (((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))){
        cout << "The year " << year << " is a leap year." << endl;
    }
    else {
        cout << "The year " << year << " is not a leap year." << endl;
        }
    return 0;
}
