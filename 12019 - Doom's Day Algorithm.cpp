#include <iostream>
#include <cstdio>
#include <cstdlib>


using namespace std;

int main()
{
	string day[7] = {"Sunday", "Monday", "Tuesday", "Wednesday","Thursday", "Friday", "Saturday"};
	int mon[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int n,m,d,count;
	cin>>n;
	while(n--)
	{
		cin>>m>>d;
		count = 0;
		for(int i=1;i<m;i++)
		{
			count+=mon[i];
		}
		count+=d;
		count = (count+5)%7; // 2011/1/1 Saturday 2011/1/0 Friday
		cout<<day[count]<<endl;
	}

	return 0;
}