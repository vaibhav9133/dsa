#include <iostream>

int fib (int n)
{
    if(n<=1)
    return 1;
    return fib(n-1)+fib(n-2);
}
using namespace std;
int main ()
{
  int n;
  cin>>n;
  int c=fib(n);
  cout<<c;

return 0;
}