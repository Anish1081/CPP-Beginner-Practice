#include <iostream>
using namespace std;
// Write a Program to Check Whether a Number is Prime or Not
int main() {
	
	int div=0, n;
	cin >> n;
    cout << "Enter a number: " << n << endl; 
    
	for ( int i=1; i<=n; i++)
	{
	    if ( n % i == 0)
	    {
	        div = div + 1;
	    }
	}
	
	if ( div == 2) 
        std::cout << "The number " << n << " is a prime number " << std::endl;
    else {
        std::cout << "The number " << n << " is not a prime number " << std::endl;
    }
	return 0;
}
