# PPSCPP230

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Structure Initialization in C++

What is wrong with the following code?

```
#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    Point p = {3, 7};

    cout << "Point: (" << p.x << ", " << p.y << ")\n";

    return 0;
}

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-21T09:30:39.918Z  

```cpp
#include <iostream>
using namespace std;

class Calculator{
Calculator Calculator:
  int a; 
  int b;

  void addition(){
    cout<<a+b<<endl;
  }

  void subtraction(){
    cout<<a-b<<endl;
  }

  void multiplication(){
    cout<<___<<endl;
  }
};

int main() {
  Calculator obj;
  cin>>obj.a>>obj.b;
  obj.addition();
  obj.subtraction();
  obj.multiplication();

  return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/PPSCPP230)