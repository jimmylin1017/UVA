#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct node
{
	char c;
	int n;
};

bool cmp(node a, node b)
{
	if(a.n == b.n)
		return a.c > b.c;
	else
		return a.n < b.n;
}

int main()
{
	string s;
	int f = 0;

	while(getline(cin,s))
	{
		if(f)
			cout<<endl;
		int count[129] = {0};
		vector<node> v;
		for(int i=0;i<s.size();i++)
		{
			count[(int)s[i]]++;
		}

		for(int i=0;i<129;i++)
		{
			if(count[i])
			{
				node t;
				t.c = (char)i;
				t.n = count[i];
				v.push_back(t);
			}
		}

		sort(v.begin(),v.end(),cmp);

		for(int i=0;i<v.size();i++)
		{
			cout<<(int)v[i].c<<" "<<v[i].n<<endl;
		}
		f = 1;
	}

	return 0;
}