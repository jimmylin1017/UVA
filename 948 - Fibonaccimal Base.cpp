#include <iostream>

using namespace std;

int fib[40];

void makefib()
{
	fib[0] = 0;
	fib[1] = 1;
	for(int i=2;i<40;i++)
	{
		fib[i] = fib[i-1] + fib[i-2];
	}
}

int main()
{
	makefib();
	int N;
	cin>>N;
	while(N--)
	{
		int num;
		bool one,start;
		string ans = "";
		one = start = 0;
		cin>>num;
		cout<<num<<" = ";
		for(int i=39;i>1;i--)
		{
			if(num >= fib[i] && !one)
			{
				ans+='1';
				num = num - fib[i];
				one = 1;
				start = 1;
			}
			else
			{
				if(start)
				{
					ans+='0';
					one = 0;
				}
			}
		}
		cout<<ans<<" (fib)"<<endl;
	}

	return 0;
}