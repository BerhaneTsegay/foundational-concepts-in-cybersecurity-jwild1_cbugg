## Minimization
Minimization means limiting the places where users and other programs can enter or extract data.
##### In our examples, we used a templated array to show this

Our good example, `minimization_good.h` uses public and private declarations to minimize user interactions to only those procedures which they should have access. 
```
private:
    ...
	T *myArray;
public:
	// Constucts array with a user defined length.
	array(int s) 
	...
	// Sets array elements
	void setArray(int elem, T val) 
    ...
	// Displays the elements in the array
	void getArray() 
	...
```
Additionally, namespaces are explicitly declared
```
using std::cout;
using std::endl;
...
using std::setw;
```
instead of just throwing everything in (like `minimization_bad.cpp`).
```
using namespace std;
```
Not stopping there, our `getArray()` method in `minimization_good.h` doesn't even return the value to the calling function, but instead prints it directly to stdout
```
    // Displays the elements in the array
    void getArray() 
	...
			cout << setw(7) << j << setw(13) << myArray[j]
				<< " type: " << typeid(myArray[j]).name() << endl;
	...
```
###### Example:
 
![Minimization](https://github.com/UW-COSC-4010-5010-CYBER-FA-2017/foundational-concepts-in-cybersecurity-jwild1_cbugg/blob/master/10/200.gif)

#### Sources:
https://difundir.org/2015/02/06/20-datos-sobre-el-cuerpo-humano-que-seran-dificiles-de-olvidar-especialmente-el-ultimo
