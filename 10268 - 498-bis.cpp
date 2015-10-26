#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <stack>

using namespace std;

int main()
{
	long long x,a,sum,count;
	char c;
	stack<long long> stk;
	while(scanf("%lld",&x) != EOF)
	{
		sum = 0;
		count = 1;
		while(cin>>a)
		{
			stk.push(a);
			c = getchar();
			if(c == '\n')
				break;
		}
		stk.pop();
		while(stk.size())
		{
			sum = sum + stk.top()*(count)*pow(x,count-1);
			stk.pop();
			count++;
		}
		cout<<sum<<endl;
				
	}

	return 0;
}