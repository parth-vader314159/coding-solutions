# OPCPP76

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Copy Constructor

In C++, a copy constructor is a special constructor that is used to create a new object as a copy of an existing object of the same class. It's like making a copy of something you already have.

You can refer to code example that illustrates the concept in an easy-to-understand way:

- The Car class has two constructors: one to set the car's name and another called the copy constructor.
- The copy constructor is called when we create a new car object (copiedCar) and initialize it using an existing car object (originalCar).
- The copy constructor copies the car's name from the existing car to the new car, creating a new car that's a copy of the original one.
- In the main() function, we create an originalCar, display its name, and then create a copiedCar using the copy constructor and display its name.

 **Key points:** 

- The copy constructor is automatically called when an object is copied.
- You can define your own copy constructor to handle deep copying of resources.
### Task

Run the code to verify it works fine.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-21T09:38:55.899Z  

```c_cpp
#include <iostream>
using namespace std;

class Car {
public:
    string carName;

    // Parameterized constructor
    Car(string carName){
      this->carName = carName;
    }

    // Copy Constructor
    Car(Car &c){
      carName = c.carName;
    }
};

int main() {
    Car originalCar("Beat"); // Parameterized constructor called here
    cout<<originalCar.carName<<endl;

    Car copiedCar(originalCar); // Copy constructor called here
    cout<<copiedCar.carName<<endl;

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/OPCPP76)