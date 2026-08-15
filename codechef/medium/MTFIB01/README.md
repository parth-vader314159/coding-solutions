# MTFIB01

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-15T16:55:04.372Z  

```c_cpp
#include <iostream>
using namespace std;

namespace CSE {
    class Student {
        
    public:
        int rollNo;
        void show() {
            cout << rollNo << " ";
        }
    };
}

namespace ECE {
    class Student {
        
    public:
        int rollNo;

        void show() {
            cout << rollNo << " ";
        }
    };
}

int main() {
    
    CSE::Student s1;
    ECE::Student s2;
    
    cin >> s1.rollNo >> s2.rollNo;

    s1.show();
    s2.show();

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/MTFIB01)