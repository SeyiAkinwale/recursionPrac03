#include <iostream>

void brackets(int n)
{
  if(n>0) 
  {
    std::cout<<"(";
    brackets(n-1);
    std::cout<<")";
  }
  else std::cout<<"";
}

int main()
{  brackets(0); }