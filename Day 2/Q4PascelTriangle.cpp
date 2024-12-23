#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}
int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int nCrPascal(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << nCr(i, j) << " ";
        }
        cout << endl;
    }
    return 0;
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    
    cout << "Pascal's Triangle for nCr: " << endl;
    nCrPascal(n);

    return 0;
}