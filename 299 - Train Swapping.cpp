#include <iostream>
#include <cstdio>

using namespace std;

#define L 50

int bubble(int train[], int n)
{
	int count = 0;
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(train[i] > train[j])
			{
				int temp = train[i];
				train[i] = train[j];
				train[j] = temp;
				count++;
			}
		}
	}

	return count;
}


int main()
{
	int train[L+1] = {0};

	int n;

	cin>>n;

	for(int i=1;i<=n;i++)
	{
		int m;
		cin>>m;
		for(int j=1;j<=m;j++)
		{
			cin>>train[j];
		}
		int s = 0;
		s = bubble(train, m);

		printf("Optimal train swapping takes %d swaps.\n", s);

	}

	return 0;
}