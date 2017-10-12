## Domain Separation
Domain Separation involves separating access between processes/machines and the data and or resources they should have access to. 
##### In our examples, we used a basic variable scope to illustrate this. 

Our good example, `domainSeparation_good.cpp` stores values returned from the user locally inside each function
```
int func1()
    ...
    int func1_var;      // Declare variable locally
    cin >> func1_var;   // Get value from user
    return func1_var;   // Return value to main
```
 then passes them as a result back to `main()`. By doing this we're preventing access to this variable by any other function or class, effectively *separating* the *domains*.
 
 In `domainSeparation_bad.cpp` we take the lazy programmer approach and declare all of our variables globally. 
 ```
int func1_res; // Globally declared variables
int func2_res;
int func1_var;
int func2_var;

int func1()
    ...
    cin >> func1_var;   // Put user input in a global variable
    ...
int main()
    ...
    func1_res = func1();    // Put function results in another global variable
    ...
 ```
 This makes for faster programming, declare all your variables globally and you won't have permission problems. Of course this means nothing else will have problems bypassing permissions either. This can also lead to name-conflicts (*a-la* overloading) and other unforseen problems, which is why it's strongly recommended against. 
 
 Other places domain separation is important would be for public APIs vs private processes run on the server itself. 
 Here's an example:
 
![Separate access for seperate items](https://github.com/UW-COSC-4010-5010-CYBER-FA-2017/foundational-concepts-in-cybersecurity-jwild1_cbugg/blob/master/1/domainSeparation.jpg)

#### Sources:
https://image.slidesharecdn.com/5anti-patternsinapidesign-buildstuff-151119041910-lva1-app6891/95/5-antipatterns-in-api-design-buildstuff-13-638.jpg?cb=1447906854
