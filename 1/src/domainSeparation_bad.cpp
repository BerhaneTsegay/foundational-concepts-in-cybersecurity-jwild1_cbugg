// domainSeparation_bad.cpp

// This is a bad example of domain separation.
//      Sub-functions can access other sub-functions
//      variables because they were declared globally.

// Chris Bugg
// COSC 4010
// 10/10/17

#include <iostream>
using namespace std;

int func1_res;  // Globally declared variables

int func2_res;

int func1_var;

int func2_var;

int func1()
{
        cout << "Enter a Number: ";

        cin >> func1_var;       // Put user input in a global variable

        return func1_var;
}

int func2()
{

        cout << "func1's input was: " << func1_var << endl;

        cout << "Enter a Number: ";

        cin >> func2_var;

        return func2_var;
}

int main()
{
        cout << "Domain Separation - Bad" << endl;

        func1_res = func1();    // Put function results in another global variable

        cout << func1_res << endl;

        func2_res = func2();

        cout << func2_res << endl;

        return 0;
}
