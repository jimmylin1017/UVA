#include <iostream>

using namespace std;

int gcd(int a, int b)
{
	if(b == 0)
		return a;
	gcd(b,a%b);
}


int main()
{

	int sum = 0;
	int n;
	while(cin>>n && n!=0)
	{
		sum = 0;
		for(int i=1;i<n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				sum+=gcd(i,j);
			}
		}

		cout<<sum<<endl;
	}
	return 0;
}