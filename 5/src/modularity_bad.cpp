#include <iostream>
using namespace std;

int main()
{
	int ans = 0;
	// You have to set the size of the array and declare elements. The numbers indicates which student
	// the floats are their grade the character is their letter grade and the string prints there name.
	int numbers[10] = {1,2,3,4,5,6,7,8,9,0};

	float floats[10] = {90.1,80.2,70.3,60.4,50.5,40.6,30.7,20.8,10.9,0.0};

	char chracters[10] = {'A','B','C','D','F','F','F','F','F','F'};

	string strings[10] = {"1 has 90.1 which is an A","2 has 80.2 which is an B","3 has 70.3 which is an C","4 has 60.4 which is an D","5 has 50.5 which is an F","6 has 40.6 which is an F","7 has 30.7 which is an F","8 has 20.8 which is an F","9 has 10.9 which is an F","0 has 0.0 which is an F"};
	cout << " do you want to see the arrays non 0 for yes" << endl;
	cin >> ans;
	if (ans != 0)
	{
		cout << numbers << endl;
		cout << floats << endl;
		cout << chracters << endl;
		cout << strings << endl;
	}
	cout << " 0 to exit." << endl;
	cin >> ans;
	if (ans == 0)
	{
		exit.0;
	}
}
