# OPCPP68

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Using Structures

In C++, structures are user-defined data types that allow you to group together different variables under a single name.

### Task

You are given a structure Car having name, year and mileage as attributes. This structure also contains a function purchase, this function will print "YES" if year is greater than 2018 and mileage is greater than 10, else print "NO".

### Input Format
- First line contain a string representing the name of the car.
- Second line contain a integer representing the year of the car.
- Third line contain a integer representing the mileage of the car.
### Output Format

Print "YES" if year is greater than 2018 and mileage is greater than 10, else print "NO".

### Sample 1:
Input
Output

```
Tommy 
2020 
15
```

```
YES
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-21T09:18:17.863Z  

```c_cpp
#include <iostream>
using namespace std;

struct Car {
    string name;
    int year;
    int mileage;

    void purchase(){
        if(year>2018 && mileage>10){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
};


int main() {
    Car obj;
    cin>>obj.name>>obj.year>>obj.mileage;
    obj.purchase();

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/OPCPP68)