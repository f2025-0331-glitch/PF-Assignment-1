// Created by Dabeer on 14/10/2025

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
double  num1, num2;
cout << "Enter First Number: ";
cin >> num1;
cout << "Enter Second Number: ";
cin >> num2;
cout <<  fixed << setprecision(3)<< endl;
cout << " Results in Decimal "<< endl;
cout << "sum: " << num1 + num2 << endl;
cout << "difference: " << num1 - num2 << endl;
cout << "product: " << num1 * num2 << endl;
cout << "quotient: " << num1 / num2 << endl;
// casting the decimals into integers
int int1= static_cast<int>(num1);
int int2= static_cast<int>(num2);
cout <<"\n Results in integer "<< endl;
cout << "sum: " << int1 + int2 << endl;
cout << "difference: " << int1 - int2 << endl;
cout << "product: " << int1 * int2 << endl;
cout << "quotient: " << int1 / int2 << endl;
return 0;
   }