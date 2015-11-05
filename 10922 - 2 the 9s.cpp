#include <iostream>

using namespace std;

int count;

void use(int n)
{
	if(n == 9 || n%9 != 0)
		return;

	int sum = 0;

	while(n)
	{
		sum = sum + n%10;
		n/=10;
	}

	count++;
	use(sum);
}

int main()
{
	string s;
	while(getline(cin,s))
	{
		if(s == "0")
			break;
		int sum = 0;
		count = 0;
		for(int i=0;i<s.size();i++)
		{
			sum = sum + (s[i]-'0');
		}
		if(sum%9 != 0)
		{
			cout<<s<<" is not a multiple of 9."<<endl;
			continue;
		}
		count++;
		use(sum);

		cout<<s<<" is a multiple of 9 and has 9-degree "<<count<<"."<<endl;
	}
	
	return 0;
}