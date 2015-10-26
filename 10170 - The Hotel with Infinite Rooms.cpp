#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
	long long S;
	long long D;
	
	while(cin>>S>>D)
	{
		long long day = 1;

		day = day + S - 1;

		while(day < D)
		{
			S++;
			day = day + S;
		}

		cout<<S<<endl;
	}



	return 0;
}