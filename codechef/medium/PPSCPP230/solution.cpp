#include <iostream>
using namespace std;

class Calculator{
Calculator Calculator:
  int a; 
  int b;

  void addition(){
    cout<<a+b<<endl;
  }

  void subtraction(){
    cout<<a-b<<endl;
  }

  void multiplication(){
    cout<<___<<endl;
  }
};

int main() {
  Calculator obj;
  cin>>obj.a>>obj.b;
  obj.addition();
  obj.subtraction();
  obj.multiplication();

  return 0;
}