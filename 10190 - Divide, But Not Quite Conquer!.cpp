#include <iostream>
#include <vector>

using namespace std;

vector<long long> v;

int main()
{
	long long a,b;

	while(cin>>a>>b)
	{
		v.clear();

		if(b <= 1 || a < b)
		{
			cout<<"Boring!"<<endl;
			continue;
		}

		while(a%b == 0 && a >= b)
		{
			v.push_back(a);
			a/=b;
		}
		v.push_back(a);
		
		if(v[v.size()-1] == 1)
		{
			for(int i=0;i<v.size();i++)
			{
				if(i!=0)
					cout<<" "<<v[i];
				else
					cout<<v[i];
			}
		}
		else
		{
			cout<<"Boring!";
		}

		cout<<endl;
	}


	return 0;
}