## Data Hiding
Data Hiding involves removing the data from an easily accessable position or form, giving up only what is required for the program to function.
##### In our examples we only allow users access to the sum of two integers from the arrays (all they need). Only the admin-portal is allowed access to the clear data.
In `data_hiding_good.cpp` we declare a special function `get_result()` which returns the sum of two integers from the arrays. This is the only function normal users require in this context.
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
			...
```
In our bad example `data_hiding_bad.cpp` we get rid of the user-portal and with it, any hope of hiding the data. The only available data access is `admin_portal()` which only provides `get_value()` and `set_value()`.
```
    // This is the admin-portal, allowing admin-level (full) access to the data
	void admin_portal()
    ...
int get_value(int array, int index)
	{
		if (array == 1)
		{
			return one[index];
		...
	void set_value(int array, int index, int value)
	{
		if (array == 1)
		{
			one[index] = value;
	...
```
Obfuscation comes in many forms...
###### Example:
![Obfuscation](https://github.com/UW-COSC-4010-5010-CYBER-FA-2017/foundational-concepts-in-cybersecurity-jwild1_cbugg/blob/master/8/data_hiding.png)
