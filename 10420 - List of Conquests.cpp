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
    map<string,int>::iterator it;
    int input;
    cin>>input;
    getchar();
    while(input--)
    {
        string s,ss;
        getline(cin,s,'\n');
        stringstream tmp(s);
        tmp>>ss;
        it = index.find(ss);
        if(it != index.end())
            (it->second)++;
        else
            index.insert(pair<string,int>(ss,1));
    }
    for(it = index.begin();it!=index.end();it++)
        cout<<it->first<<" "<<it->second<<endl;
}
