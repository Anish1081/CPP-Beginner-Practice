// Write a Program to Display all Factors of a Number entered by User
#include<iostream>
using namespace std;

int main() {
    int n;
    int factors=0;
    cin >> n;
    cout << "Enter a number: " << n << endl;
    
    for (int i=1; i<=n; i++){
        if (n % i == 0){
            cout << "The factors of " << n << " are " << i << endl;         
        }
    }
    
    return 0;
}
