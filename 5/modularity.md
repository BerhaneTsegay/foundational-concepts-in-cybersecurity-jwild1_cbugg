# Modularity

```
// define's a templated array.
 template< typename T > class array {
```
Utilizing a templated array allows the user to create an array of any type of elements without  having to explicitly creating an particular type of array for every use case. One container many applications is the definition of modularity. 


![alt text](https://github.com/UW-COSC-4010-5010-CYBER-FA-2017/foundational-concepts-in-cybersecurity-jwild1_cbugg/blob/master/5/giphy.gif "Logo Title Text 1")

Trying to use this gradebook array set up is terrible. you cannot modify anything you can create new arrays the arrays do not update eachother and trying to use it for any other situation would be equally untennable. each student has a number a  percentage grad a letter grade a a message that prints out. every time all of the information is du mped to the screen. this is not usable for other purposes and is the antithisis of modularity.

```
int numbers[10] = {1,2,3,4,5,6,7,8,9,0};

	float floats[10] = {90.1,80.2,70.3,60.4,50.5,40.6,30.7,20.8,10.9,0.0};

	char chracters[10] = {'A','B','C','D','F','F','F','F','F','F'};

	string strings[10] = {"1 has 90.1 which is an A","2 has 80.2 which is an B","3 has 70.3 which is an C","4 has 60.4 which is an D","5 has 50.5 which is an F","6 has 40.6 which is an F","7 has 30.7 which is an F","8 has 20.8 which is an F","9 has 10.9 which is an F","0 has 0.0 which is an F"};
	cout << " do you want to see the arrays non 0 for yes" << endl;
```
This is a visual example of modularity.
