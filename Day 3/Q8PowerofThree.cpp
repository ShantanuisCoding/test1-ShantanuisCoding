#include <iostream>
using namespace std;

int powerOfThree(int n) {
    if (n == 0) {
        return false;
    }
    while (n % 3 == 0) {
        n /= 3;
    }
    return n == 1;
}

int main() {

    cout << "Enter the number: ";
    int n;
    cin >> n;

    cout << "Is " << n << " a power of three? " << powerOfThree(n) << endl;
    
    return 0;
}