#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <map>
#include <string>
#include <sstream>
#include <algorithm>
#include <cmath>
using namespace std;


int main(void)
{
    map<string,int> index;
    int m,n;
    cin>>m>>n;
    getchar();
    while(m--)
    {
        string s,ss;
        int a;
        getline(cin,s,'\n');
        stringstream tmp(s);
        tmp>>ss>>a;
        index.insert(pair<string,int>(ss,a));
    }
    while(n--)
    {
        string s;
        int total = 0;
        while(getline(cin,s,'\n'))
        {
            if(s[0] == '.')
                break;
            stringstream tmp(s);
            string ss;
            while(tmp>>ss)
            {
                if(index.find(ss)!=index.end())
                {
                    total+=index.find(ss)->second;
                }
            }

        }
        cout<<total<<endl;
    }
}
