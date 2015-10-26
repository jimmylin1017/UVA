#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <map>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;


int main(void)
{
    string s;
    map<string,int> index;
    while(getline(cin,s))
    {
        for(int i=0;i<s.size();i++)
        {
            s[i] = tolower(s[i]);
            if(s[i] < 'a' || s[i] > 'z')
            {
                s[i] = ' ';
            }
        }
        stringstream tmp(s);
        string ss;
        while(tmp>>ss)
        {
            index.insert(pair<string,int>(ss,0));
        }

    }
    map<string,int>::iterator it;
    for(it = index.begin();it!=index.end();it++)
    {
        cout<<it->first<<endl;
    }
}
