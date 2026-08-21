# OPCPP76

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-21T09:36:46.960Z  

```c_cpp
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student(string name,int age){
      this->name = name;
      this->age = age;
    }

    void display(){
        cout<<name<<endl;
        cout<<age<<endl;
    }
};


int main() {
    string s; 
    int a;
    cin>>s>>a;
    Student obj(s,a);
    obj.display();

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/OPCPP76)