#include <iostream>
#include <cstdbool>
using namespace std;

int get_int(string string);
int mcm(int a, int b);
void desc(long n);

int main()
{
	int num1 = get_int("Numero 1: ");
	int num2 = get_int("Numero 2: ");
	bool over1 = false;
	long mcd = (num1 * num2) / mcm(num1, num2);
	cout<<"El resultado es "<<mcd<<" o también ";
	desc(mcd);
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
        printf("1");
    }
    printf("1\n");
}
