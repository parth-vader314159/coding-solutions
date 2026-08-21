# OPCPP81

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Default Constructor Absence

What happens if you provide a class with a user-defined constructor but do not provide a default constructor, and you attempt to create an object without arguments?

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-21T09:45:52.090Z  

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

[View on CodeChef](https://www.codechef.com/problems/OPCPP81)