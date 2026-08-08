# OPCPP11

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Coding - Rectangle Class Methods

Write a class Rectangle with length and breadth as attribute and area and perimeter as methods. Given length and breadth as input, Print area and perimeter of rectangle using area and perimeter methods respectively.

### Input Format
- The first line of input contains length of rectangle.
- The second line of input contains breadth of rectangle.
### Output Format
- First line contains the output of area method of Rectangle.
- Second line contains the output of perimeter method of Rectangle.
### Sample 1:
Input
Output

```
2 
3
```

```
6
10
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-08T19:11:45.414Z  

```c_cpp
#include <iostream>
using namespace std;

class Rectangle{
public:
    int length;
    int breadth;
    
    void area(){
        cout<<length*breadth<<endl;
    }
    void perimeter(){
        cout<<2*(length+breadth)<<endl;
    }
};

int main() {
    Rectangle r;
    cin>>r.length>>r.breadth;
    r.area();
    r.perimeter();
	return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/OPCPP11)