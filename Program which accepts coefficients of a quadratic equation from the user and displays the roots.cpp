// Write a Program which accepts coefficients of a quadratic equation from the user and displays the roots (both real and complex roots depending upon the discriminant).
#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c;
    cout << "The coefficients of the quadratic equation are:" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    
    d = b*b - 4*a*c;
    
    if (d > 0){
    double r1, r2;
    r1 = (-(b)+sqrt(d))/(2*a);
    r2 = (-(b)-sqrt(d))/(2*a);
    cout << "The roots of the equation are: " << r1 << " and " << r2 << endl;
    }
    else{
        cout << "The value of discriminant is complex." << endl;
    }
    
    return 0;
}
