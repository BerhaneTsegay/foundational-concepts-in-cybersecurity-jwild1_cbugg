## Resource Encapsulation
Resource Encapsulation requires program and system designers to limit access to resources to only those systems/processes whom require access. 
##### In our examples we used c++'s public/private declarations to allow/disallow other functions access to private variables
In `resourceEncapsulation_good.cpp` we have a secret number protected by a `private` declaration
```
private:
    	int secret_number = 42; // Defining a secret number not to be shared with other functions/classes
```
Then, there's a dedicated getter method with a `public` declaration so it can be accessed by other functions/classes
```
public:	
    	int get_secret() // A dedicated function for getting the value of 'secret_number'
```
So other functions can only see what `get_secret()` allows
```
int main()
    	...
	what_is_it = secret_keeper.get_secret();	// Getting the 'secret_number' through the defined methods
	cout << "get_secret() says: " << what_is_it << endl;
```
In `resourceEncapsulation_bad.cpp` we've again taken the lazy programmer's mantel and *just declared it all public*.
```
public:
	int secret_number = 42;	// Defining a secret number not to be shared with other functions/classes	
   	int get_secret() // A dedicated function for getting the value of 'secret_number'
```
Which means other functions can easily grab the value directly from the class, bypassing the get/set methods.
```
int main()
    	...
    	what_is_it = secret_keeper.secret_number;	// Getting the 'secret_number' directly from the class
    	cout << "secret_number says: " << what_is_it << endl;
```
Sometimes, all you want your users to be able to do is *blend*.
###### Blend:
![Blend](https://github.com/UW-COSC-4010-5010-CYBER-FA-2017/foundational-concepts-in-cybersecurity-jwild1_cbugg/blob/master/3/resourceEncapsulation.jpg)

#### Sources:
https://uxmag.com/articles/the-dirtiest-word-in-ux-complexity
