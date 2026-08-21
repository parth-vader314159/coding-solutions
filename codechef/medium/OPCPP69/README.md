# OPCPP69

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Player BMI Calculation

Write a Player class containing height and weight as attributes. Also this class contains a BMI method which returns an integer BMI of this person.

### Note

```
BMI = floor((weight)/(height^2))

Here,  floor() function returns the largest integer that is smaller than or equal to the value passed as the argument.

```

### Input Format

First line contains two integers height and weight respectively.

### Output Format

Print bmi on first line as ouput.

### Sample 1:
Input
Output

```
2 60
```

```
15
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-21T09:18:56.964Z  

```c_cpp
#include <iostream>
using namespace std;

class Player{
public:
  int  height; 
  int weight;

  int bmi(){
    return weight/(height*height);
  }
};

int main() {
  Player obj; 
  cin>>obj.height>>obj.weight;
  cout<<obj.bmi();

  return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/OPCPP69)