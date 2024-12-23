#include <iostream>
using namespace std;

int table(int n) {
    int i = 1;
        while( i <= 10){
            cout <<" "<< n << " * " << i << " = " << n*i << endl;
            i++;
        }
}
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    table(n);

    return 0;
}