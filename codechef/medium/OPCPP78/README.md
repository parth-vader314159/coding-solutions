# OPCPP78

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Static Balance Tracker

Create a BankAccount class that simulates a simple bank account. The class should have the following features:

- A static data member totalBalance to keep track of the total balance across all accounts.
- A constructor that takes an initial balance as a parameter and updates totalBalance accordingly.

There are 2 BankAccounts in the Bank. Given the balance of both the accounts as input, create the object using constructor to update totalBalance and print totalBalance of Bank.

### Input Format

First line contain 2 integers representing the balances of bank accounts.

### Output Format

Print the value of totalBalance.

### Sample 1:
Input
Output

```
10 20
```

```
30
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-21T09:42:52.893Z  

```c_cpp
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

[View on CodeChef](https://www.codechef.com/problems/OPCPP78)