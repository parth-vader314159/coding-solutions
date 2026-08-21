# OPCPP77

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Static in OOPs

In C++, the static keyword can also be used within a class to define static data members and static member functions.

- Static Data Members: Static data members belong to the class itself, rather than to individual objects created from the class. They are shared among all instances of the class and are initialized only once, typically at the beginning of the program.
- Static Member Functions: Static member functions are associated with the class rather than with instances of the class. They can only access static data members and other static member functions of the class.

 **Note** 

- In C++, the scope resolution operator :: is used to access elements (variables, functions, classes, etc.) that belong to a particular scope, such as a namespace or a class.
- You can use the scope resolution operator to access static data members and static member functions of a class. Refer to the code to know how to use scope resolution operator.

 **In this example:** 

- staticCounter is a static data member shared among all instances of MyClass.
- In the constructor of MyClass, staticCounter is incremented each time an object is created.
- displayCounter() static member function is able to access the static data member and display its value.

In the `main()` function, two `MyClass` objects are created, and then the `displayCounter()` function is called to show the value of staticCounter.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-21T09:41:51.559Z  

```c_cpp
#include <iostream>
using namespace std;

class MyClass {
public:
    static int staticCounter; // Static data member

    MyClass() {
        staticCounter++; // Incremented each time an object is created
    }

    static void displayCounter() {
        cout << "Static Counter: " << staticCounter << endl;
    }
};

int MyClass::staticCounter = 0; // Initialize the static data member

int main() {
    MyClass obj1;
    MyClass obj2;
    MyClass::displayCounter(); // Accessing the static member function

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/OPCPP77)