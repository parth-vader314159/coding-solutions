# PPSCPP229

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Uninitialized Variable Output

What will the output when you run the following code?

```
#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int width;
};

int main() {
    Rectangle rect;
    cout << "Area: " << rect.length * rect.width;

    return 0;
}

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-21T09:30:06.058Z  

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

[View on CodeChef](https://www.codechef.com/problems/PPSCPP229)