#include <iostream>
#include <cstring>
#include <sstream>
#include <algorithm>

using namespace std;

#define MAX 46340

bool prime[1000000];
int primet[5000];

void creat()
{
	memset(prime,true,sizeof(prime));
	for(int i=2;i<MAX;i++)
	{
		if(!prime[i])
			continue;
		for(int j=2;i*j<MAX;j++)
		{
			prime[i*j] = 0;
		}
	}
	memset(primet,0,sizeof(primet));
	for(int i=2,j=0;i<MAX;i++)
	{
		if(prime[i])
			primet[j++] = i;
	}
}

void string_to_int(string a, string b, int &n, int &m)
{
	stringstream buf(a);
	buf>>n;
	buf.str("");
	buf.clear();
	buf<<b;
	buf>>m;
}


int main()
{
	creat();
	string a,b;
	bool p = 1,e = 1;

	while(cin>>a)
	{
		char *c = new char[a.size()];;
		p = 1,e = 1;
		strcpy(c,a.c_str());
		reverse(c,c+strlen(c));
		b = c;

		int n,m;
		string_to_int(a,b,n,m);

		if(n > MAX)
		{
			for(int i=0;i<5000;i++)
			{
				if(primet[i] == 0)
					break;
				if(n%primet[i] == 0)
					p = 0;
			}
		}
		else
		{
			if(!prime[n])
				p = 0;
		}

		if(m > MAX)
		{
			for(int i=0;i<5000;i++)
			{
				if(primet[i] == 0)
					break;
				if(m%primet[i] == 0)
					e = 0;
			}
		}
		else
		{
			if(!prime[m])
				e = 0;
		}

		if(n == m)
		{
			e = 0;
		}

		if(p && e)
			cout<<n<<" is emirp."<<endl;
		else if(p)
			cout<<n<<" is prime."<<endl;
		else
			cout<<n<<" is not prime."<<endl;

		delete c;
	}

	return 0;
}