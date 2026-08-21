# OPCPP66

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Coding Problem

You are given a class Product having name and price as attributes. This class also contain display method to print the information of the Product.

### Task

Given the name and price of Product as input. Print the information of the product using display method.

### Sample 1:
Input
Output

```
Cheems
12
```

```
Name - Cheems
Price - 12

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-21T09:17:05.550Z  

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

[View on CodeChef](https://www.codechef.com/problems/OPCPP66)