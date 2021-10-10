// Write a Program to Find Factorial of a given number N (N is entered by user)
#include <iostream>
using namespace std;

int main() {
    int n, factorial=1, i;
    cin >> n;
    cout << "Enter a number: " << n << endl;
    
    for (i=1; i<=n; i++){
        factorial = factorial*i;
    }
    cout << "The factorial of the number " << n << " = " << factorial << endl;
    
    return 0;
    
}
