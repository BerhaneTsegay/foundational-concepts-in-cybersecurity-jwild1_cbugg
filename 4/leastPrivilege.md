## Least Privilege
Least Privilege involves separating access to all available functions and only utilizing the least privilege level required. 
##### In our examples we used two seperate portals for administrator-level and user-level access for the data.
In `least_privilege_good.cpp` we declare a seperate user-portal
```
// This is the user-portal, allowing user-level access to the data
	void user_portal()
	{...
			cout << "Welcome to the User Portal" << endl;
			cout << "(1) - Get Result" << endl;
			cout << "(0) - Exit" << endl;
			cout << "Enter Choice:" << endl;
			...
```
This portal only allows users to access a special getter function `get_result()`
```
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
			{...
```
In `least_privilege_bad.cpp` we've taken away the user-portal and the only available method to interact with the data is at the admin-level.
```
        cout << "Welcome" << endl;
		cout << "(1) - Admin Portal" << endl;
		cout << "(0) - Exit" << endl;
        cout << "Enter Choice:" << endl;
```
We've additionally changed the access to the admin-portal from this (`least_privilege_good.cpp`):
```
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
	...
```
To this (`least_privilege_bad.cpp`):
```
{
    controller.admin_portal();
}
```
As tempting as these (below) pop-ups are to just use admin-access it's always better to use the least-privilege level required. 
###### Example:
![Least Privilege](https://github.com/UW-COSC-4010-5010-CYBER-FA-2017/foundational-concepts-in-cybersecurity-jwild1_cbugg/blob/master/4/least_privilege.png)
