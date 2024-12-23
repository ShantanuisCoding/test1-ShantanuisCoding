#include<iostream>
#include<cmath>
using namespace std;

int area(int a, int b){
    return a*b;
}

int area(int a){
    return 3.14*a*a;
}

int area(int a, int b, int c){
    int s = (a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main(){
    int a, b, c;
    cout<<"Enter the sides of the rectangle: ";
    cin>>a>>b;
    cout<<"Area of the rectangle is: "<<area(a, b)<<endl;
    cout<<"Enter the radius of the circle: ";
    cin>>a;
    cout<<"Area of the circle is: "<<area(a)<<endl;
    cout<<"Enter the sides of the triangle: ";
    cin>>a>>b>>c;
    cout<<"Area of the triangle is: "<<area(a, b, c)<<endl;
    return 0;
}