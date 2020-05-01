#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

bool itsPrime (int p)
{
	bool prime = true;
	for(int i=2;i<=p/2;i++)
	{
		//cout<<p%i<<endl;
		if(p%i==0)
		{
			prime = false;
			//cout<< "aqui"<<endl;
			break;
		}
		
	}
	//cout<< "ici"<<endl;
	if(prime)
	{
		//cout<< "true";
		return prime;
		
	}
	else
	{
		//cout<<"falso";
		return prime;
		
	}
	//cout<< "aca";
}

void suma (int n)
{
	for(int i=2;i<n;i++)
	{
		if(itsPrime(i) && itsPrime(n-i))
		{
			cout<< i << "+" << n-i << "=" << n << endl;
			break;
		}
	}
}


int main(int argc, char** argv) {
	int n,flag;
	cout<<"Ingrese un numero menor que 100: ";
	cin>>n;
	while(n>=100)
	{
		cout<<"Error, ingrese un numero inferior a 100: ";
		cin>>n;
	}
	for(int i=4;i<=n;i+=2)
	{
		suma(i);
	}
	return 0;
}




