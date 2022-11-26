#include <iostream>
using namespace std;

class A
{
public:
  void DA()
  {
    cout << "Hello from A";
  }
};

class B : public A
{
public:
  int a, b;

  void DB()
  {
    cout << "\nHello from B";
  }
};

int main()
{

  A a = A();

  a.DA();

  B b = B();
  b.DB();
  b.DA();

  A a1 = B();

  cout << "\n";
  a1.DA();
  // a1.DB(); // give the error in the this line

  return 0;
}
