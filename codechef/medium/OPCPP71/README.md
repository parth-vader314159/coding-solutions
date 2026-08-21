# OPCPP71

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Coding Problem

You are given a Medicine class having name and expiration year as attributes. A person can take a medicine if the current year is less than or equal to expiration year of the medicine.

### Task

Given the name and expiration year of a medicine and current year. Print "YES" if current year is less than or equal to expiration year else print "NO".

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-21T09:20:11.173Z  

```c_cpp
#include <iostream>
using namespace std;

class Medicine{
public:
  string name; 
  int expiration_year;

};

int main() {
  Medicine obj;
  obj.name = "doggo";
  obj.expiration_year = 2024;
  int current_year = 2023;

  if(current_year <= obj.expiration_year){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }

  return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/OPCPP71)