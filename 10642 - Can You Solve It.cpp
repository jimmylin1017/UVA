#include <iostream>

using namespace std;

int use(int x, int y)
{
	if(x == 0 && y == 0)
		return 0;

	int end = x + y;
	int count = 0;

	for(int i=1;i<end;i++)
	{
		count+=i;
		count++;
	}

	count+=x;

	count++;

	return count;
}

int main()
{
	int n;
	cin>>n;

	for(int i=1;i<=n;i++)
	{
		int a,b,c,d;
		cin>>a>>b>>c>>d;

		int step1,step2;

		if(a+b > c+d)
		{
			step1 = use(a,b);
			step2 = use(c,d);
		}
		else
		{
			step1 = use(c,d);
			step2 = use(a,b);
		}
		cout<<"Case "<<i<<": "<<step1 - step2<<endl;

	}

	return 0;
}