# NUDTB01

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are developing a student record management system in C++.

Each student has: Roll number Marks

The marks of a student can be updated by an operation performed by a separate function. Your task is to write a C++ program that:

- Defines a Student class.
- Keeps rollNo and marks as private data members.
- Provides member functions to initialize and display student information.
- Stores N students using an array of objects.
- Implements a separate function:
- void updateStudent(Student &s, int newMarks)
- The function must modify the original Student object passed to it.
- After all updates, display the final records.

Important Requirement: The function responsible for updating a student must receive the Student object using a reference variable. The following approaches are not allowed:

void updateStudent(Student s, int newMarks) or void updateStudent(Student *s, int newMarks)

Input Format: The first line contains an integer N, the number of students. The next N lines contain two integers: rollNo marks The next line contains an integer Q, the number of updates. The next Q lines contain: index newMarks

where index is the 0-based index of the student whose marks have to be updated.

Constraints 1 ≤ N ≤ 1000 1 ≤ rollNo ≤ 100000 0 ≤ marks ≤ 100 1 ≤ Q ≤ 1000 0 ≤ index < N 0 ≤ newMarks ≤ 100

Output Format: Print the final details of all students.

For every student, print: rollNo marks in the same order in which the students were provided.

Sample Input 5 101 45 102 60 103 72 104 81 105 55 3 0 70 2 90 4 80

Sample Output 101 70 102 60 103 90 104 81 105 80

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-15T17:56:51.818Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

class Student{
    private:
    int rollno; 
    int marks; 
    
    public:
    void init(int r, int m){
        rollno= r; 
        marks = m; 
    }
    
    void setMarks(int newMarks){
        marks = newMarks;
    }
    
    void display() const{
        cout << rollno << " " << marks << " " ;
        
    }

};

void updateStudent(Student &s, int newMarks){
    s.setMarks(newMarks);
}

int main() {
	
	
	int n;
	if (!(cin >> n)) return 0;
	
	Student arr[1000];
	for (int i = 0; i <n; i++){
	    int r, m;
	    cin >> r >> m; 
	    arr[i].init(r, m);
	}
	
	int q;
	cin >> q;
	
	for (int i = 0; i < q; i++){
	    int index, newMarks;
	    cin >> index >> newMarks;
	    updateStudent(arr[index], newMarks);
	    
	}
	
	for (int i = 0; i<n ; i++){
	    arr[i].display();
	}
	return 0;

}

```

---

[View on CodeChef](https://www.codechef.com/problems/NUDTB01)