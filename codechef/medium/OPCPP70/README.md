# OPCPP70

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Class Integer Size Options

Which of the following are the possible sizes of a class having only integer attributes ?

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-21T09:19:11.781Z  

```cpp
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

[View on CodeChef](https://www.codechef.com/problems/OPCPP70)