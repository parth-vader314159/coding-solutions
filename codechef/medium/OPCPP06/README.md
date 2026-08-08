# OPCPP06

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Calculating size of object of a class

You can determine the size of an object of a class in C++ by manually summing up the sizes of its individual data members. For example :

```
class MyClass {
public:
    int x;
    char c;
    double d;
};

```

In this example, we have to manually add the sizes of the int, char, and double data members to calculate the size of the MyClass object.

### Task

Which of the following is the correct output for the given code ?

```
#include <iostream>
using namespace std;

class MyClass {
public:
    int x;
    string s; 
};

int main() {
    MyClass obj;
    cout << sizeof(obj) << endl;

    return 0;
}

```

 **Note:**  The size of an empty class is not zero due to the C++ language standard's requirements. The size of an empty class in C++ is 1 byte. The reason for this minimum size of 1 byte is to ensure that each instance of a class has a unique address in memory. Even an empty class must have a unique address to differentiate it from other objects and to meet the requirements of pointer arithmetic and memory addressing.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-08T19:07:23.321Z  

```cpp
#include<bits/stdc++.h>
using namespace std;

// Step 1: Define the class
class MyClass {
    // Step 2: Declare private members (data and functions)
    private:
        int privateValue;

    // Step 3: Declare public members (data and functions)
    public:
        int publicValue;

        void publicFunction() {
            
        }
};

int main() {
    // Step 4: Create an object of the class
    MyClass obj;

    // Step 5: accessing and changing the object's public data
    obj.publicValue = 10;

    // Step 6: Use the object's public functions
    obj.publicFunction();

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/OPCPP06)