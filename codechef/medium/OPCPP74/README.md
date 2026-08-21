# OPCPP74

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Constructors in C++

In C++, a constructor is a special member function within a class that is automatically called when an instance (object) of the class is created.
Constructors have the same name as the class and do not have a return type, not even void. Constructors can be overloaded, which means you can define multiple constructors with different parameter lists.

You can refer to code to know how to define and use constructors in C++.

- The MyClass class has two constructors: a default constructor (with no parameters) and a parameterized constructor (with an integer parameter).
- The default constructor initializes the value member to 0, and the parameterized constructor initializes it with the provided value.
- In the main() function, we create two instances of MyClass: obj1 using the default constructor and obj2 using the parameterized constructor.
- We then call the displayValue() function to show the initialized values of the value member for each object.

 **Key points to remember:** 

- Constructors are automatically called when an object is created. They initialize the object's data members.
- Constructors have the same name as the class and no return type.
- Constructors can be overloaded to provide different ways of initializing objects.
- If you don't define any constructors, C++ provides a default constructor that does nothing.
- Constructors are essential for proper object initialization and ensuring that objects start in a valid state.
- Constructors can also be used for resource allocation or any other necessary setup.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-21T09:35:43.848Z  

```c_cpp
#include <iostream>
using namespace std;

class MyClass {
public:
    int value;
    
    // Default constructor (no parameters)
    MyClass() {
        cout << "Default constructor called." << std::endl;
        value = 0;
    }

    // Parameterized constructor
    MyClass(int val) {
        cout << "Parameterized constructor called." << std::endl;
        value = val;
    }

    void displayValue() {
        cout << "Value: " << value << std::endl;
    }

};

int main() {
    MyClass obj1;         // Calls the default constructor
    MyClass obj2(42);     // Calls the parameterized constructor

    obj1.displayValue();
    obj2.displayValue();

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/OPCPP74)