#include <iostream>
using namespace std;

int reverse(int n) {
    int rev = 0;
    while(n > 0) {
        rev = rev*10 + n%10;
        n = n/10;
    }
    return rev;
}

int main() {
    int n; 
    cout << "Enter the number: ";
    cin >> n;
    cout << "Reverse of " << n << " is " << reverse(n) << endl;
    
    return 0;
}