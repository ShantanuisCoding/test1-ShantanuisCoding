// A non empty array of integers, every element appears twice times except for one, which appears exactly once. Find that single one.

#include<iostream>
using namespace std;

#define SIZE 50000

int single (int arr[], int n) {
    int res = 0;
    for(int i = 0; i < n; i++) {
        res = res ^ arr[i];
    }
    return res;
}
int main(){
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    int n[SIZE];
    cout << "Enter the elements: ";
    for(int i = 0; i < size; i++) {
        cin >> n[i];
    }
    cout << "The single element is: " << single(n, size);
    return 0;
}