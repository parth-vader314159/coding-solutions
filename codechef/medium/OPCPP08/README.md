# OPCPP08

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### MCQ - Access Specifiers Syntax Check

Which of the following is a correct syntax ?

 **Option 1** 

```
class Employee{
  int id;
  int salary;
};

int main() {
  Employee a;
  a.id=12;
  a.salary=800;

  return 0;
}

```

 **Option 2** 

```
class Employee{
public:
  int id;
  int salary;
};

int main() {
  Employee a;
  a.id=12;
  a.salary=800;

  return 0;
}

```

 **Option 3** 

```
class Employee{
public:
  int id;
  int salary;
};

int main() {
  Employee a;
  a->id=12;
  a->salary=800;

  return 0;
}

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-08T19:09:07.239Z  

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

[View on CodeChef](https://www.codechef.com/problems/OPCPP08)