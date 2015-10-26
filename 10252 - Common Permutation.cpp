#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
	string a,b;

	while(getline(cin,a))
	{
		getline(cin,b);
		int ac[26] = {0};
		int bc[26] = {0};
		for(int i=0;i<a.size();i++)
		{
			ac[a[i]-'a']++;
		}
		for(int i=0;i<b.size();i++)
		{
			bc[b[i]-'a']++;
		}
		for(int i=0;i<26;i++)
		{

			if(ac[i] && bc[i])
			{
				int c;
				ac[i] < bc[i] ? c = ac[i] : c = bc[i];
				while(c--)
					cout<<(char)('a'+i);
			}
		}
		cout<<endl;

	}

	return 0;
}