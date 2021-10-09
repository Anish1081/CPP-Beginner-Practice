// *Write a Program to Display Fibonacci Series upto certain number n (n is entered by user)
#include <iostream>
using namespace std;

int main() {
    int a=0, b=1, nextterm=0, n, i, firsterm, secondterm;
    cin >> n;
    cout << "Enter the number: " << n << endl;
 
    
  while ( b < n ){
    cout << nextterm << "  " << endl;
    nextterm=a+b;
    a=b;
    b=nextterm;
  }

    return 0;
}

