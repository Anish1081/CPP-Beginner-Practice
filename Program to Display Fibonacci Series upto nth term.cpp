// Write a Program to Display Fibonacci Series upto nth term (n is entered by user)
#include <iostream>
using namespace std;

int main() {
    int a=0, b=1, nextterm, n, i, firsterm, secondterm;
    cin >> n;
    cout << "Enter the nth term: " << n << endl;
    
    cout << a << endl;
    cout << b << endl;    
    
    for(i=2; i<n; i++){
        firsterm = 0;
        secondterm = 1;
        nextterm = a + b;
        a = b;
        b = nextterm;
        cout << nextterm << endl;
    }
       
    return 0;
}

    
