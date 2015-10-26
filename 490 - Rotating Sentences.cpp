#include <iostream>
#include <cstdio>
#include <cstdlib>


using namespace std;

int main()
{
	string s[101];
	int count = 0;
	int t = 0;
	int max = 0;

	while(getline(cin,s[count]))
		count++;

	for(int i=count-1;i>=0;i--)
	{
		if(s[i].size() > max)
			max = s[i].size();
	}

	while(t < max)
	{
		for(int i=count-1;i>=0;i--)
		{
			if(t < s[i].size())
			{
				cout<<s[i][t];
			}
			else
				cout<<' ';
		}
		cout<<endl;
		t++;
	}
	

	return 0;
}