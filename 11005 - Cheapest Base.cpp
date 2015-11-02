#include <iostream>
#include <cstring>

using namespace std;

int dollar[36];
bool min_base[36+1];

int cheap_count(int num, int base)
{
	int money = 0;
	for(;num > 0;num/=base)
		money+=dollar[num%base];
	return money;
}

int main()
{
	int a,b;
	cin>>a;
	for(int kase = 1;kase <= a;kase++)
	{
		memset(dollar,0,sizeof(dollar));
		memset(min_base,0,sizeof(min_base));
		cout<<"Case "<<kase<<":\n";
		for(int i=0;i<36;i++)
		{
			cin>>dollar[i];
		}
		cin>>b;
		while(b--)
		{
			int num,min;
			cin>>num;
			cout<<"Cheapest base(s) for number "<<num<<":";
			min = cheap_count(num,2);
			min_base[2] = 1;
			for(int i=3;i<=36;i++)
			{
				int temp = cheap_count(num,i);
				if(min > temp)
				{
					min = temp;
					memset(min_base,0,sizeof(min_base));
					min_base[i] = 1;
				}
				else if(min == temp)
					min_base[i] = 1;
			}
			for(int i=1;i<=36;i++)
			{
				if(min_base[i])
				{
					cout<<" "<<i;
				}
			}
			cout<<endl;
		}
		if(kase != a)
			cout<<endl;
		
	}

	return 0;
}