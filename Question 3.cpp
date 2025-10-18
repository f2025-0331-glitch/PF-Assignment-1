// Created by Dabeer on 18/10/2025.

#include <iostream>
using namespace std;
int main() {
    int num1, num2, num3;
    cout<<"Enter three Integers; ";
    cout<<"\nNumber One: ";
    cin>>num1;
    cout<<"Number Two: ";
    cin>>num2;
    cout<<"Number Three: ";
    cin>>num3;
    cout<<endl<<"Result"<<endl;

    // If all numbers are Equal
    if (num1 == num2 && num2 == num3) {
        cout<<"All Numbers are Equal " <<endl;
    }

    // largest number
    else {
        if (num1 >= num2 && num2 >= num3)cout<<"Largest Number: "<<num1<<endl;
        else if (num2 >= num1 && num2 >= num3)cout<<"Largest Number: "<<num2<<endl;
        else cout<<"Largest Number: "<<num3<<endl;

        // smallest number
        if (num1 <= num2 && num1 <= num3)cout <<"Smallest Number: "<<num1<<endl;
        else if (num2 <= num1 && num2 <= num3)cout <<"Smallest Number: "<<num2<<endl;
        else cout<<"Smallest Number: "<<num3<<endl;
        return 0;
    }
}