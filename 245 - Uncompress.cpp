#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <list>
#include <sstream>
#include <cstring>
#include <cmath>
using namespace std;

std::list<string>::iterator fit;
list<string> ls;

int use(string s)
{
    int count=0;
    for(fit = ls.begin();fit != ls.end();fit++)
    {
        count++;
        if((*it)==s)
        {
            return count;
        }
    }
    return 0;
}


int main(void)
{

    string s;

    while(getline(cin,s,'\n'))
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i] >= '1' && s[i] <= '9')
                continue;
            else if(tolower(s[i]) > 'z' || tolower(s[i]) < 'a')
                s[i] = ' ';
        }
        stringstream tmp(s);
        string ss;
        while(tmp>>ss)
        {
            int
            if(fit != ls.end())
            {

            }
        }
    }
}
