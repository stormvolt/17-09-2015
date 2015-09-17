#include <iostream>
using namespace std;


void pal(int *a)
{
	int b = *a;
	int d=0;
	int c=0;
	while(b!=0)
		{	
			c=b%10;
			d=d*10+c;
			b=b/10;
		}
	if(d==*a)
	{
		cout<<"El numero es palindromo."<<"\n";
	}
	else
	{
		cout<<"El numero no es palindromo."<<"\n";
	}
}



int main()
{
	cout<<"Ingrese un numero: ";
	int a;
	cin>> a;
	int *pa=&a;
	pal(pa);
	return 1;
}
