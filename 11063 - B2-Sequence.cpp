#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{
	int n,num[100+5],count = 1;
	bool ans[20001],judge;

	while(cin>>n)
	{
		memset(ans,false,sizeof(ans));
		judge = true;
		for(int i=0;i<n;i++)
		{
			cin>>num[i];
			if(num[i] < 1 || (i > 0 && num[i] < num[i-1]))
			{
				judge = false;
			}
		}
		for(int i=0;i<n;i++)
		{
			int sum;
			for(int j=i;j<n;j++)
			{
				sum = num[i] + num[j];
				if(ans[sum])
				{
					judge = false;
				}
				else
					ans[sum] = true;
			}
		}
		if(judge)
			printf("Case #%d: It is a B2-Sequence.\n\n",count++);
		else
			printf("Case #%d: It is not a B2-Sequence.\n\n",count++);

	}

	return 0;
}