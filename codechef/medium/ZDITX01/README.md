# ZDITX01

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Two departments of a university independently define a class named Student. Both classes have the same data member rollNo, but their implementations are different.

The following program is intended to create one object from each namespace and print their roll numbers.

However, some parts of the code are missing.

You have to determine the minimum number of missing tokens required and produce the correct output.

Consider the given code:

Input: Two integers R1 and R2, representing the roll numbers of the CSE and ECE students.

Output: Print the roll numbers in the following format: CSE_ROLL ECE_ROLL

Example Input: 101 202 Output: 101 202

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-15T16:55:00.825Z  

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

[View on CodeChef](https://www.codechef.com/problems/ZDITX01)