#include<iostream>
#include<math.h>
using namespace std;


bool primo(long long int n)
{
	if (n % 2 == 0)
		return false;
	for (long long int i = 3; i <= (pow(n, 0.5)); i = i + 2)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

int main()
{
	int a[]={};
	for(int i=1;i<=10;++i)
	{
		if (primo(i)==true)
		{
			cout<<i<<endl;
			for(int j=0;j<10;++j)
			{
			a[j]=i;}
		}
	}
	for(int k=1;k<=10;++k)
	{
		cout<<a[k]<<" ";
	}
	return 0;
}
	


