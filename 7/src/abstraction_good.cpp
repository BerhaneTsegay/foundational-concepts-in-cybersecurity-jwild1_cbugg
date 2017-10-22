// abstraction_good.cpp

// This program allows users to determine the result of adding two integers
// found in the pre-set arrays. It additionally has an admin portal which
// allows full access to each individual value for greater control.

// This is a good example of abstraction. It utilizes a seperate class for
// performing all data-access, as well as get/set methods for actually
// interacting with the data, abstracting out the details of array-access
// and other functions.

// Chris Bugg
// COSC 4010
// 10/22/17

#include <iostream>
#include <string>

using namespace std;

// This class controlls the portals (admin/user) and the data.
class Controller
{

public:	

	// Gets the sum of two integers from the pre-set arrays
	int get_result(int array_1, int index_1, int array_2, int index_2)
	{
		if (array_1 == 1)
		{
			if (array_2 == 1)
			{
				return (one[index_1] + one[index_2]);
			}
			else
			{
				return (one[index_1] + two[index_2]);
			}
		}
		else
			if (array_2 == 1)
			{
				return (two[index_1] + one[index_2]);
			}
			else
			{
				return (two[index_1] + two[index_2]);
			}
	}

	// This is the user-portal, allowing user-level access to the data
	void user_portal()
	{

		bool done = false;

		while (!done)
		{

			int choice = 0;

			// This is a more-portable 'clear screen'
			cout << string(50, '\n');

			cout << "Welcome to the User Portal" << endl;
			cout << "(1) - Get Result" << endl;
			cout << "(0) - Exit" << endl;
			cout << "Enter Choice:" << endl;

			cin >> choice;

			if (choice == 1)
			{
				int array_1 = 1;
				int index_1 = 1;
				int array_2 = 1;
				int index_2 = 1;

				cout << "Enter array item 1 is from: ";
	
				cin >> array_1;

				cout << "Enter index value of item 1: ";

				cin >> index_1;

				cout << "Enter array item 2 is from: ";
	
				cin >> array_2;

				cout << "Enter index value of item 2: ";

				cin >> index_2;

				cout << get_result(array_1, index_1, array_2, index_2) << endl;

				cout << "Enter to continue...";

				getchar();
				getchar();

			}
			else
			{
				done = true;
			}
		}
	}

	// This is the admin-portal, allowing admin-level (full) access to the data
	void admin_portal()
	{
		bool done = false;

		while (!done)
		{

			int choice = 0;

			cout << string(50, '\n');

			cout << "Welcome to the Admin Portal" << endl;
			cout << "(1) - Get Value" << endl;
			cout << "(2) - Set Value" << endl;
			cout << "(0) - Exit" << endl;
			cout << "Enter Choice:" << endl;

			cin >> choice;

			if (choice == 1)
			{
				int array = 1;
				int index = 1;

				cout << "Enter array item is from: ";
					
				cin >> array;
				
				cout << "Enter index value of item: ";

				cin >> index;

				cout << get_value(array, index) << endl;

				cout << "Enter to continue...";
				
				getchar();
				getchar();

			}
			else if (choice == 2)
			{
				int array = 1;
				int index = 1;
				int value = 1;

				cout << "Enter array item is from: ";
					
				cin >> array;
				
				cout << "Enter index value of item: ";

				cin >> index;

				cout << "Enter new value of item: ";

				cin >> value;

				set_value(array, index, value);

				cout << "Item value set to " << value << endl;

				cout << "Enter to continue...";
				
				getchar();
				getchar();

			}
			else
			{
				done = true;
			}

		}
	}

private:

	// Pre-set arrays
	int one[10] = {0,1,2,3,4,5,6,7,8,9};
	int two[10] = {9,8,7,6,5,4,3,2,1,0};

	int get_value(int array, int index)
	{
		if (array == 1)
		{
			return one[index];
		}
		else
		{
			return two[index];
		}
	}

	void set_value(int array, int index, int value)
	{
		if (array == 1)
		{
			one[index] = value;
		}
		else
		{
			two[index] = value;
		}
	}

};

int main()
{

	Controller controller;

	bool done = false;

	// Loop the menu
	while (!done)
	{

		int choice = 0;

		cout << string(50, '\n');

		cout << "Welcome" << endl;
		cout << "(1) - Admin Portal" << endl;
		cout << "(2) - User Portal" << endl;
		cout << "(0) - Exit" << endl;
		cout << "Enter Choice:" << endl;

		cin >> choice;

		if (choice == 1)
		{
			// The admin portal is password protected
			string pwd = "secret";

			string input = "";

			cout << "Password: ";

			cin >> input;
					

			if(pwd == input)
			{
				controller.admin_portal();
			}	
			else
			{
				cout << "Not Authorized" << endl;

				cout << "Enter to continue...";
				
				getchar();
				getchar();
			}

		}

		else if (choice == 2)
		{
			controller.user_portal();
		}			
		else
		{
			done = true;
		}
	}	

	return 0;
}
