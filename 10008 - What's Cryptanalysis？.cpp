#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cctype>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<char,int> PAIR;  

bool cmp(const PAIR& a, const PAIR& b)
{
	if(a.second == b.second)
		return (int)a.first < (int)b.first;
	return a.second > b.second;
}


int main()
{
	int n;
	string s;
	map<char,int> smap;
	
	map<char,int>::iterator it;
	cin>>n;
	getchar();
	while(getline(cin,s))
	{
		//getline(cin,s);
		for(int i=0;i<s.size();i++)
		{
			if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
			{
				s[i] = toupper(s[i]);
				if(smap.find(s[i]) != smap.end())
					smap[s[i]]++;
				else
					smap.insert(pair<char,int>(s[i],1));
			}
		}
	}
	
	vector<PAIR> vec(smap.begin(),smap.end());
	sort(vec.begin(),vec.end(),cmp);
	
	/*
	for(it = smap.begin();it != smap.end();it++)
	{
		vec.push_back(*it);
	}
	sort(vec.begin(),vec.end(),cmp);
	*/

	for(int i=0;i<vec.size();i++)
	{
		cout<<vec[i].first<<" "<<vec[i].second<<endl;
	}
	
	return 0;
}
