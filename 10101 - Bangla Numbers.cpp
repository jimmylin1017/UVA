#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

void print(long long int n)
{

	if(n/10000000)
	{
		print(n/10000000);
		cout<<" kuti";
		n = n%10000000;
	}

	if(n/100000)
	{
		print(n/100000);
		cout<<" lakh";
		n = n%100000;
	}

	if(n/1000)
	{
		print(n/1000);
		cout<<" hajar";
		n = n%1000;
	}

	if(n/100)
	{
		print(n/100);
		cout<<" shata";
		n = n%100;
	}

	if(n)
		cout<<" "<<n;
}

int main()
{
	long long int num;
	long long int count = 1;
	while(cin>>num)
	{
		printf("%4lld.",count);
		if(num == 0)
		{
			cout<<" "<<num<<endl;
			count++;
			continue;
		}
		print(num);
		cout<<endl;
		count++;
	}
	

	return 0;
}