// Created by Dabeer on 18/10/2025.

#include <iostream>
using namespace std;
int main() {
    int num1,num2;
    cout<<"Number 1: ";
    cin>>num1;
    cout<<"Number 2: ";
    cin>>num2;
    cout<<endl<<"Before swapping: Number 1= "<<num1<<", Number 2= "<<num2;

    // swapping using arithmetic operations
    num1=num1+num2;  // 1st step: add both numbers and store it in 'a'
    num2=num1-num2;  // 2nd : subtract new 'b' from 'a' to get original 'a' value
    num1=num1-num2;  // 3rd : subtract new 'b' from 'a' to get original 'b' value

    cout<<endl;
    cout <<"After swapping: Number 1= "<<num1<<", Number 2= "<<num2;
    return 0;
}