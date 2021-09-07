#include <iostream>
using namespace std;
// 1. Write a Program to Generate Multiplication Table of a number (entered by the user) using a for loop.
int main() {
    int n;
    cin >> n;
    cout << "Enter a number n: " << n << endl;
    
    int product=1;
    for (int i=1; i<=10; i++){
        product= n*i;
        cout << product << endl;
    }
    
    return 0;
}
