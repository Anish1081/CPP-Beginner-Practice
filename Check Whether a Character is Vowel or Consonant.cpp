#include <iostream>
using namespace std;
// Write a Program to Check Whether a Character is Vowel or Consonant.
int main() {
    char letter;
    cin >> letter;
    cout << "Enter a letter: " << letter << endl;
   
    if (letter=='a' || letter=='e' || letter=='i' || letter=='o'|| letter=='u' || letter=='A' || letter=='E' || letter=='I' || letter=='O'|| letter=='U'){
         std::cout << "The letter " << letter << " is a vowel" << std::endl;
    }
    else {
        std::cout << "The letter " << letter << " is a Consonant" << std::endl;
    }
	return 0;
}
//trying to commit
