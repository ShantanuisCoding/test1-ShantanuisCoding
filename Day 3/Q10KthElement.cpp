#include <iostream>
#include <string>

using namespace std;

char findKthCharacter(int k) {
    string word = "a";
    while (word.length() < k) {
        string newWord;
        for (char c : word) {
            if (c == 'z') {
                newWord += 'a';
            } else {
                newWord += c + 1;
            }
        }
        word += newWord;
    }
    return word[k - 1];
}

int main() {
    int k;
    cout << "Enter the value of k: ";
    cin >> k;
    if (k < 1 || k > 500) {
        cerr << "k must be between 1 and 500" << endl;
        return 1;
    }
    cout << "The " << k << "-th character is: " << findKthCharacter(k) << endl;
    return 0;
}