# OPCPP65

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Introduction to Structures

In C++, structures are user-defined data types that allow you to group together different variables under a single name.

Here's how you can define and use structures in C++:

- We define a structure named MyStruct using the struct keyword. Inside the structure, we declare three members: an int variable x, a double variable y, and a char variable c.
- In the main function, we declare a variable myObject of type MyStruct. This creates an instance of the structure.
- We access and initialize the structure members using the dot (.) operator. For example, myObject.x refers to the x member of the myObject structure.

Remember that structures in C++ can also have member functions, but they are limited in functionality compared to classes. It's generally recommended to use classes for more complex data structures that require inheritance, encapsulation and abstraction, while using structs for simpler data containers.

### Task

 **Run the code to generate the output of the code.**

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-21T09:16:24.561Z  

```c_cpp
#include <iostream>
using namespace std;

// Define the structure
struct MyStruct {
    int x;
    double y;
    char c;
};

int main() {
    // Declare and initialize a structure variable
    MyStruct myObject;
    myObject.x = 10;
    myObject.y = 3.14;
    myObject.c = 'A';

    // Access and use structure members
    cout << "x: " << myObject.x << endl;
    cout << "y: " << myObject.y << endl;
    cout << "c: " << myObject.c << endl;
   
   // Please note, we can initialize struct variable like this also:
   // MyStruct structObj = {3, 7.4, 'D'};

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/OPCPP65)