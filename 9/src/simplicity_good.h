#pragma once
#ifndef ARRAY_H_
#define ARRAY_H_
#include <iostream>
using std::cout;
using std::endl;
#include <iomanip>
using std::setw;
#include <typeinfo>

// define's a templated array.
template< typename T > class array {
private:
	int size;
	T *myArray;
public:
	// Constucts array with a user defined length.
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
		for (int j = 0; j < size; j++)
		{
			
			cout << setw(7) << j << setw(13) << myArray[j]
				<< " type: " << typeid(myArray[j]).name() << endl;
		}
		cout << "-----------------------------" << endl;
	}
};

#endif
