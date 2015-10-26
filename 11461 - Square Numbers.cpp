#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
	int a,b,count;
	while(cin>>a>>b && a)
	{
		count = 0;
		for(int i=a;i<=b;i++)
		{
			if((sqrt(i) - (int)sqrt(i)) == 0)
				count++;
		}
		cout<<count<<endl;
	}
	return 0;
}