#include <iostream>
using namespace std;

int get_int(string string);

int main()
{
  int divisor = 2;
  int counter = 0;
  int m = get_int("Numero 1: ");
  int n = get_int("Numero 2: ");
  while (m > 1 && n > 1)
  {
    if(m % divisor == 0 && n % divisor == 0 )
    {
      m /= divisor;
      n /= divisor;
      counter++;
      if (m % divisor != 0 && n % divisor != 0 )
      {
        cout<<divisor<<"^"<<counter<<"x";
      }
    }
    else
    {
      divisor++;
    }
  }
  cout<<"1\n";
}

int get_int(string string)
{
  int n;
  cout<<string;
  cin>>n;
  return n;
}
