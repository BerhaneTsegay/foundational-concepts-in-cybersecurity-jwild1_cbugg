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
Having to individually fill in each of the array element's for these explicitly created arrays is not a simple way to run a grabe book.
```
int numbers[10] = {1,2,3,4,5,6,7,8,9,0};

	float floats[10] = {90.1,80.2,70.3,60.4,50.5,40.6,30.7,20.8,10.9,0.0};

	char chracters[10] = {'A','B','C','D','F','F','F','F','F','F'};

	string strings[10] = {"1 has 90.1 which is an A","2 has 80.2 which is an B","3 has 70.3 which is an C","4 has 60.4 which is an D","5 has 50.5 which is an F","6 has 40.6 which is an F","7 has 30.7 which is an F","8 has 20.8 which is an F","9 has 10.9 which is an F","0 has 0.0 which is an F"};
	cout << " do you want to see the arrays non 0 for yes" << endl;
```
![alt text](https://github.com/UW-COSC-4010-5010-CYBER-FA-2017/foundational-concepts-in-cybersecurity-jwild1_cbugg/blob/master/9/simplicity-8-728.jpg "Logo Title Text 1")
