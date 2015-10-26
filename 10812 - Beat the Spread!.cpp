#include <iostream>
#include <cstdio>
#include <cstdlib>


using namespace std;

int main()
{
	int n;
	cin>>n;

	while(n--)
	{
		long long a,b;
		cin>>a>>b;
		if((a+b)%2 == 1 || (a+b)/2 < 0 || (a-b)/2 < 0)
			cout<<"impossible"<<endl;
		else
			cout<<(a+b)/2<<" "<<(a-b)/2<<endl;
	}

	return 0;
}