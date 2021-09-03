//Write a Program to Check Whether a Character is Vowel or Consonant.

#include <iostream>
using namespace std;

int main() {
    char c;
    bool isVowel;
    cout << "Enter an alphabet: ";
    cin >> c;

    isVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // show error message if c is not an alphabet
    if (!isalpha(c))
      printf("Neither vowel nor consonant.");
    else if (isVowel)
        cout << c << " is a vowel.";
    else
        cout << c << " is a consonant.";
    return 0;
}