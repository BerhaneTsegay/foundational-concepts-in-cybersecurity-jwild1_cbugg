// layering_bad.cpp

// This program allows users to determine the result of adding two integers
// found in the pre-set arrays. 

// This is a bad example of layering. The application can be run
// using only admin-level access with full data access in the clear and no
// password protection.

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
		cout << "(0) - Exit" << endl;
		cout << "Enter Choice:" << endl;

		cin >> choice;

		if (choice == 1)
		{
			controller.admin_portal();
		}
		
		else
		{
			done = true;
		}
	}	

	return 0;
}
