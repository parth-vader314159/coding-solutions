# OPCPP07

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### MCQ - Class Size Calculation

What will be the output of this code ?

```
#include <iostream>
using namespace std;

class Employee{
  string name;
  int age;
};

int main() {
  Employee a;
  cout<<sizeof(a);

  return 0;
}

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-08T19:08:36.323Z  

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

[View on CodeChef](https://www.codechef.com/problems/OPCPP07)