#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {

    cout << "Enter the number: ";
    int n;
    cin >> n;

    cout << "Factorial of " << n << ": " << factorial(n) << endl;

    return 0;
}