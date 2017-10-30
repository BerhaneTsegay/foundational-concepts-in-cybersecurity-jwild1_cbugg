## Layering
Layering means providing multiple steps or levels that would need to be overcome for an attacker to gain access to a system/data.
##### In our examples we only allow users access to the sum of two integers from the arrays (all they need). Only the admin-portal (password protected) is allowed access to the data, and then it is still only shown as an md5 hash.
In `layering_good.cpp` we see that the user-portal only is allowed to get the sum of two numbers from the arrays.
```
    // This is the user-portal, allowing user-level access to the data
    void user_portal()
        ...
        cout << "Welcome to the User Portal" << endl;
        cout << "(1) - Get Result" << endl;
        ...
        cout << get_result(array_1, index_1, array_2, index_2) << endl;
```
Further, our admin-portal is password protected.
```
        	// The admin portal is password protected
            ...
			if(pwd == input)
			{
				controller.admin_portal();
			}	
			else
			{
				cout << "Not Authorized" << endl;
            ...
```
And further still the result of a direct value lookup only returns an md5 hash of the value.
```
string get_value(int array, int index)
	{
		if (array == 1)
		{		
			return md5(to_string(one[index]));
		}
		else
		{
			return md5(to_string(two[index]));
		}
}
```
In our bad example `layering_bad.cpp` we get rid of the user-portal and with it, any hope of hiding the data. The only available data access is `admin_portal()` which only provides direct access to the data in the clear.
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
Layering helps solve bottlenecks and single-point-of-failure situations from cropping up by providing a broad spectrum of ~~Babybel Cheese~~ domains that can be tackled in varying degrees of intensity.
###### Example:
![Layering](https://github.com/UW-COSC-4010-5010-CYBER-FA-2017/foundational-concepts-in-cybersecurity-jwild1_cbugg/blob/master/6/layering.png)
###### Source:
http://www.zedwood.com/article/cpp-md5-function
