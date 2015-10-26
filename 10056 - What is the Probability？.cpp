#include <iostream>
#include <cstdio>
#include <cstdlib>

const double num = 1e-10;

using namespace std;

int main()
{
	
	int n,a,b;
	double ans,m,p,t1,t2;
	cin>>n;

	while(n--)
	{
		ans = 0;
		t1 = t2 = 1;
		p = 1;
		cin>>a>>m>>b;

		for(int i=0;i<a;i++)
			t1*=(1-m);

		for(int i=1;i<b;i++)
			t2*=(1-m);
		t2*=m;

		while(1)
		{
			if(p < num || m == 0)
				break;
			else
			{
				ans = ans + p*t2;
				p*=t1;
			}
		}

		printf("%.4lf\n",ans);
	}

	return 0;
}