/*Write a Program to Calculate Power of a Number using inbuilt pow() function by taking two inputs from users as Base and exponent respectively*/
#include <iostream>
using namespace std;

int main() {
   int n, p, c=1, i;
   cin >> n;
    cout << "Enter a base n: " << n << endl;
    cin >> p;
    cout << "Enter an exponent p: " << p << endl;
    
    for (i=0; i<p; i++){
        c*=n;
        cout << c << endl;;
    }
   
	return 0;
}
