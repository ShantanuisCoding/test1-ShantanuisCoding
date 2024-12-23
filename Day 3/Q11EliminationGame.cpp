#include <iostream>

using namespace std;

int lastRemaining(int n) {
    bool left = true;
    int remaining = n;
    int step = 1;
    int head = 1;

    while (remaining > 1) {
        if (left || remaining % 2 == 1) {
            head += step;
        }
        remaining /= 2;
        step *= 2;
        left = !left;
    }

    return head;
}

int main() {
    int num;
    cout << "Enter the value of n: ";
    cin >> num;
    cout << "The last remaining number is: " << lastRemaining(num) << endl;
    return 0;
}
