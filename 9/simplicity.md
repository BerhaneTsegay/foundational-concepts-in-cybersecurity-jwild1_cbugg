## Simplicity
Utilizing one templated array that allows the user to create an array of any type is much simpler thanrequiring a different instantiation for every type of array that you may want to create. 
```
// define's a templated array.
 template< typename T > class array
```
Allowing the user to create arrays, set the elements and print the array through easily utilized functions.
```
array(int s) 
	{
		size = s;
		myArray = new T[size];
	}
	
	// Sets array elements
	void setArray(int elem, T val) 
	{
		myArray[elem] = val;
	}

	// Displays the elements in the array
	void getArray() 
	{
		for (int i = 0; i < size; i++)
		{
			cout << setw(7) << i << setw(13) << myArray[i]
				<< " Array Type: " << typeid(myArray[i]).name() << endl;
		}
		cout << endl;
	} 
```
