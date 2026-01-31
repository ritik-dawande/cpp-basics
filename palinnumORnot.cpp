#include <iostream>
using namespace std;

int main() {
    int n, original, reverse = 0;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while (n > 0) {
        int lastDigit = n % 10;
        reverse = reverse * 10 + lastDigit;
        n = n / 10;
    }

    // Printing both numbers
    cout << "Original number: " << original << endl;
    cout << "Reversed number: " << reverse << endl;

    // Checking palindrome
    if (original == reverse) {
        cout << "It is a Palindrome number" << endl;
    } else {
        cout << "It is NOT a Palindrome number" << endl;
    }

    return 0;
    
}
