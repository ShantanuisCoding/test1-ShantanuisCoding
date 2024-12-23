#include<iostream>
using namespace std;

int digitCount(int n){
    int count = 0;
    while(n != 0){
        n /= 10;
        count++;
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter a number to find the number of digits: ";
    cin>>n;
    cout<<"The number of digits in "<<n<<" is: "<<digitCount(n);

    return 0;
}
