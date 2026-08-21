# OPCPP75

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Constructor coding problem

You are given a Student class having name and age as attributes and a display method. This class also has a parameterized constructor having name and age as parameters to initialize the value of name and age of student respectively.
Given name and age as input, Create a student class, initialize the values and then print the information of Student using display method.

### Input Format
- First line contain a string representing name of the student.
- Second line contain a integer representing age of the student.
### Output Format

Print the information of the student using display method.

### Sample 1:
Input
Output

```
Alice 
12
```

```
Alice 
12
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-21T09:36:41.435Z  

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

[View on CodeChef](https://www.codechef.com/problems/OPCPP75)