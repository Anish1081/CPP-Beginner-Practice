/* Write a Program to Calculate Power of a Number using inbuilt pow() function by taking two inputs from users as Base and exponent respectively*/
#include <iostream>
using namespace std;
    int main(){
    int n,p;
    double d;
        cin >> n;
        cout << "Enter a base: " << n << endl;
        cin >> p;
        cout << "Enter the power: " << p << endl;
        
        d=pow(n, p);
        cout << "The result is: " << d << endl;
    
    
    return 0;
}
