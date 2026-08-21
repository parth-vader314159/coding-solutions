# OPCPP72

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Access Modifiers and Object Access

Which of the following are leading to error in the given code ?

```
#include <iostream>
using namespace std;

class Racket{
  string name; 
  int size;

};

int main() {
  Racket obj;
  obj->name = "cheems";
  obj->size = 12;

  return 0;
}

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-21T09:21:38.624Z  

```cpp
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

[View on CodeChef](https://www.codechef.com/problems/OPCPP72)