#include <iostream>
#include <cstdbool>
using namespace std;

int get_int(string string);

int main()
{
	int num1 = get_int("Numero 1: ");
	int num2 = get_int("Numero 2: ");
	bool over = false;
	for(int mcm = 2; over == false; mcm++)
	{
		if(mcm % num1 == 0 && mcm % num2 == 0)
		{
			cout<<mcm;
			over = true;
		}
	}
	return 0;
}

int get_int(string string)
{
  int n;
  cout<<string;
  cin>>n;
  return n;
}