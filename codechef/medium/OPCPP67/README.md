# OPCPP67

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-21T09:17:13.145Z  

```c_cpp
#include <iostream>
using namespace std;

class Product {
    public:
    string name;
    int price;

    void display(){
        cout<<"Name - "<<name<<endl;
        cout<<"Price - "<<price<<endl;
    }
};

int main() {
    Product obj;
    cin>>obj.name>>obj.price;

    obj.display();

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/OPCPP67)