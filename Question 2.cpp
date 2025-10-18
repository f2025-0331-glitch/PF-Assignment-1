// Created by Dabeer on 18/10/2025.

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() {
    double sub1,sub2,sub3,sub4,sub5;
    double total,percentage;
    string grade;
    cout << "Subject 1: ";
    cin >> sub1;
    cout <<"Subject 2: ";
    cin >> sub2;
    cout <<"Subject 3: ";
    cin >> sub3;
    cout <<"Subject 4: ";
    cin >> sub4;
    cout <<"Subject 5: ";
    cin >> sub5;
    // Calculating
    total=sub1+sub2+sub3+sub4+sub5;
    percentage=total/5;

    // Grade calculation
    if (percentage>=90) grade ="A+";
    else if (percentage>=80) grade ="A";
    else if (percentage>=70) grade ="B";
    else if (percentage>=60) grade ="C";
    else if (percentage>=50) grade ="D";
    else grade ="F";

    // Result Card generation
    cout <<endl << "       Result  Card "<< endl;
    cout << fixed << setprecision(2);
    cout << left << setw(12) << "  Subject" << right << setw(12) << "Marks";
    cout << endl <<"-------------------------"<<endl;
    cout << left << setw(12) << "Subject 1: " << right << setw(12) <<sub1 << endl;
    cout << left << setw(12) << "Subject 2:" << right << setw(12) <<sub2 << endl;
    cout << left << setw(12) << "Subject 3: " << right << setw(12) <<sub3 << endl;
    cout << left << setw(12) << "Subject 4: " << right << setw(12) <<sub4 << endl;
    cout << left << setw(12) << "Subject 5: " << right << setw(12) <<sub5 << endl;
    cout << left << setw(12) << "Total: " << right << setw(12) <<total << endl;
    cout << left << setw(12) << "Percentage: " << right << setw(12) <<percentage << endl;
    cout << left << setw(12) << "Grade: " << right << setw(12) <<grade << endl;
    // Ternary Operation
    cout << left << setw(12) <<"Result: "<<right<< setw(12) <<((percentage>=50)? "Pass" : "Fail")<< endl;
    return 0;
}