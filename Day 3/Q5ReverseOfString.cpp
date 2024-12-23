#include <iostream>
using namespace std;

string reverseString(string s) {
    if (s.length() == 0) {
        return "";
    }
    return reverseString(s.substr(1)) + s[0];
}

int main() {

    cout << "Enter the string: ";
    string s;
    cin >> s;

    cout << "Reverse of the string: " << reverseString(s) << endl;

    return 0;
}