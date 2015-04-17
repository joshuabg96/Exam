#include <iostream>
using namespace std;

int n=0,b=1,c,num,contador=1;
long long int fibonacci(long long int a)
{
	long long int x;
	if(a==0)
	{
		x=0;
	}
	if(a>0 && a<3)
	{
		x=1;
	}
	if(a>2)
	{
		while(a>contador)
		{
			c=n+b;
			n=b;
			b=c;
			contador++;
		}
		x=c;
	}
	return x;

}

int main ()
{
	cout<<"por favor ponga un numero"<<endl;
	cin>>num;
	long long fib=fibonacci(num);
	cout<<"su respuesta es"<<fib<<endl;
	
}
