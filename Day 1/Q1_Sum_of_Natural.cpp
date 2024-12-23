#include<iostream>
using namespace std;    

int sumNatural(int n){
    return n*(n+1)/2;
}

int main(){
    int n;
    cout<<"Enter a number to find Sum: ";
    cin>>n;
    cout<<"The sum of first "<<n<<" natural numbers is: "<<sumNatural(n);

    return 0;
}