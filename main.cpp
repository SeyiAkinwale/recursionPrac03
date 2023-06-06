#include <iostream>

void f(int n)
{
  std::cout<<n;
  if(n>1) f(n-1);
  if(n>2) f(n-2);
}

int main()
{  f(4); }