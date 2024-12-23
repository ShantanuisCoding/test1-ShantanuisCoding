#include <iostream>
using namespace std;

int sumArray(int arr[], int n) {
    if (n <= 0) {
        return 0;
    }
    return sumArray(arr, n - 1) + arr[n - 1];
}

int main() {

    cout << "Enter the Length of Array: ";
    int n;
    cin >> n;

    int arr[1000];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Sum of the array elements: " << sumArray(arr, n) << endl;

    return 0;
}