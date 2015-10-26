#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
	string s,n;

	int a,b;
	while(getline(cin,s))
	{
		if(s == "0")
			break;
		a = b = 0;
		n = "";
		for(int i=0;i<s.size();i++)
		{
			if(s[i] >= '0' && s[i] <='9')
				n+=s[i];
		}
		for(int i=0;i<n.size();i+=2)
		{
			a = a + (int)(n[i]-'0');
		}
		for(int i=1;i<n.size();i+=2)
		{
			b = b + (int)(n[i]-'0');
		}
		if((b-a)%11 == 0)
			cout<<n<<" is a multiple of 11."<<endl;
		else
			cout<<n<<" is not a multiple of 11."<<endl;

	}

	return 0;
}