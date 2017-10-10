// domainSeparation_good.cpp

// This is a good example of domain separation. Each sub-function can only access it's own local variables, not the ones from the other functions. 

// Chris Bugg
// COSC 4010
// 10/10/17

#include <iostream>
using namespace std;

int func1()
{
        cout << "Enter a Number: ";

        int func1_var;

        cin >> func1_var;

        return func1_var;
}

int func2()
{
        cout << "Enter a Number: ";

        int func2_var;

        cin >> func2_var;

        return func2_var;
}

int main()
{
        cout << "Domain Separation - Good" << endl;

        int func1_res;

        func1_res = func1();

        cout << func1_res << endl;
	
	int func2_res;

        func2_res = func2();

        cout << func2_res << endl;

        return 0;
}
