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
			cout<<"El resultado es "<<mcm<<" o también ";
			desc(mcm);
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

void desc(long n)
{
    long numero = n;
    long counter = 0;
    long divisor = 2;
    if (numero != 1)
    {
        while(numero > 1)
        {
            if (numero % divisor == 0)
            {
                numero = numero / divisor;
				        counter++;
                if (numero % divisor != 0)
                {
                    cout<<divisor<<"^"<<counter<<"x";       
                }
            }
            else
            {
                divisor++;
                counter -= counter;
            }
        }
    }
    else
    {
        cout<<"1";
    }
    cout<<"1\n";
}
