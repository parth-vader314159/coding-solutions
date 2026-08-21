# OPCPP80

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Constructor vs Member Function

What is the key difference between a constructor and a regular member function in a C++ class?

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-21T09:44:28.626Z  

```cpp
#include <iostream>
using namespace std;

class BankAccount {
public:
    static int totalBalance;
    int balance;
    
    BankAccount(int amount) {
        totalBalance += amount;
    }
};

int BankAccount::totalBalance = 0.0;

int main() {
    int amount; 
    cin>>amount;
    BankAccount account1(amount);
    cin>>amount;
    BankAccount account2(amount);


    cout << BankAccount::totalBalance << endl;

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/OPCPP80)