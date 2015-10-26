#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>


using namespace std;

int main()
{
	int n;
	int arr[3001] = {0};
	bool dif[3001];
	while(cin>>n)
	{
		bool judge = true;
		for(int i=1;i<=n;i++)
			dif[i] = false;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(int i=1;i<n;i++)
		{
			int d = abs(arr[i] - arr[i-1]);
			if(d >= n || d <= 0 || dif[d])
			{
				judge = false;
				break;
			}
			dif[d] = true;
		}

		if(judge)
			cout<<"Jolly"<<endl;
		else
			cout<<"Not jolly"<<endl;

	}

	return 0;
}