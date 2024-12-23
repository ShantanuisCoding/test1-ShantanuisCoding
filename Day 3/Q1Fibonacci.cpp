// #include <iostream>
// using namespace std;

// int fibonacci(int n) {
//     if (n <= 1) {
//         return n;
//     }
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }

// int main() {
//     cout << "Enter the number of terms: ";
//     int n;
//     cin >> n;

//     cout << "Fibonacci series: ";
//     for (int i = 0; i < n; ++i) {
//         cout << fibonacci(i) << " ";
//     }
//     cout << endl;

//     return 0;
// }


#include <iostream>
using namespace std;

int fiboncci(int n){
    if (n <= 1){
        return n;
    }
    return fiboncci(n-1) + fiboncci(n-2);
}

int main() {

    cout << "Enter the number of terms: ";
    int n;
    cin >> n;

    cout << "Fibonacci series: ";
    for (int i = 1; i <= n; ++i){
        cout << fiboncci(i) << " ";
    }
    cout << endl;

    return 0;
}