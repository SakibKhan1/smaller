/*
Author: Sakib Khan
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 1 A

This program will find the smaller of two integers when inputted.
*/

#include <iostream>
using namespace std;

int main()
{
    int firstnum, secondnum;
    //declared two integers as variables for user input
    cout << "Input first number: " << endl;
    cin >> firstnum;
    cout << "Input second number: " << endl;
    cin >> secondnum;
    if(firstnum > secondnum){
        cout << "The smallest of the two numbers is: " << secondnum << endl;
    } else{
            cout << "The smallest of the two numbers is: " << firstnum << endl;
            }


    return 0;

}
