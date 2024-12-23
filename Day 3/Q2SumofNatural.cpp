#include <iostream>
using namespace std;

int Nsum(int n){
    if (n == 0 || n == 1){
        return n;
    }
    return n + Nsum(n-1);
}

int main() {
    cout << "Enter the number of terms: ";
    int n;
    cin >> n;

    cout << "Sum of first " << n << " natural numbers: " << Nsum(n) << endl;

    return 0;
}

// 6. Find the K-th Character in String Game 
// Alice and Bob are playing a game. Initially, Alice has a string word = "a".
// You are given a positive integer k
// Now Bob will ask Alice to perform the following operation forever:
// Generate a new string by changing each character in word to its next character in the English alphabet, and append it to the original word.
