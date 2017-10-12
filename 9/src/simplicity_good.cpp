#include "simplicity_good.h"
int main()
{
	// makes an in array with a size of two
	array< int > int_array(2);
	
	// sets the value of the first element
	int_array.setArray(0, 3);
	
	// set value to a second element (error correction-inputing a float or something will be coverted to int)
	int_array.setArray(1, 3.4);

	// Dispplays the elements
	int_array.getArray();

	//make a float array
	array< float > float_array(3);

	// set's the value of the first element
	float_array.setArray(0, 3.4);
	
	// set's the value of the second element
	float_array.setArray(1, 2.8);

	//Display's the array elements
	float_array.getArray();

	//makes a array of floats with a size of five
	array< char > char_array(5);

	// set value to a first element
	char_array.setArray(0, 'H');
	
	// sets c=various other elements
	char_array.setArray(1, 'L');
	char_array.setArray(2, '3');
	char_array.setArray(3, '3');
	char_array.setArray(4, 'T');

	char_array.getArray();

	return 0;
}
