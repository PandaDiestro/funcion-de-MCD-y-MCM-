#include <iostream>
#include <cstdbool>
using namespace std;

int get_int(string string);
int mcm(int a, int b);

int main()
{
	int num1 = get_int("Numero 1: ");
	int num2 = get_int("Numero 2: ");
	bool over1 = false;
	int mcd = (num1 * num2) / mcm(num1, num2);
	cout<<mcd<<"\n";
}
	
int get_int(string string)
{
  int n;
  cout<<string;
  cin>>n;
  return n;
}

int mcm(int a, int b)
{
	int n1 = a;
	int n2 = b;
	bool over = false;
	for(int mcm = 2; over == false; mcm++)
	{
		if(mcm % n1 == 0 && mcm % n2 == 0)
		{
			over = true;
			return mcm;
		}
	}
}
