# OPCPP79

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Static Member Size Calculation

Which of the following is the correct output for the given code?

```
#include <iostream>
using namespace std;

class BankAccount {
public:
    static int totalBalance;
    int id;
};

int main() {
    BankAccount account1;
    cout << sizeof(account1) << endl;

    return 0;
}

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-21T09:44:03.337Z  

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

[View on CodeChef](https://www.codechef.com/problems/OPCPP79)