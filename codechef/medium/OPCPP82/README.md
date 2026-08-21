# OPCPP82

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Circle Area Calculation

You are given a class Circle having radius as attributes, constructors and a getArea function which return the area of the circle.

### Task

Create two circles c1 and c2. c1 is created using the default constructor, which initializes its radius to 1.0. c2 is created using the constructor with one parameter, which initializes its radius to 5.0. The getArea() function is used to calculate the area of each circle.

Debug the code to ensure everything works fine.

### Output Format
- Print the area of c1 at first line.
- Print the area of c2 at second line.
### Sample 1:
Input
Output

```
 
```

```
The area of circle c1 is 3.14159
The area of circle c2 is 78.5397
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-21T09:47:39.779Z  

```c_cpp
#include <iostream>

using namespace std;

class Circle {
public:
  double radius;

  // Default constructor
  Circle() {
    radius = 1.0;
  }

  // Constructor with one parameter
  Circle(double radius) {
    this->radius = radius;
  }

  // Calculate the area of the circle
  double getArea() {
    return 3.14159 * radius * radius;
  }
};

int main() {
  // Create a circle using the default constructor
  Circle c1;
  cout << "The area of circle c1 is " << c1.getArea() << endl;

  // Create a circle using the constructor with one parameter
  Circle c2(5.0);
  cout << "The area of circle c2 is " << c2.getArea() << endl;

  return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/OPCPP82)