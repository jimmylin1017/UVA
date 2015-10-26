#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <map>
#include <cmath>
using namespace std;


int main(void)
{
    map<string,string> index;
    char s[30];
    while(gets(s))
    {
        if(s[0] == '\0')
            break;
        char s1[10],s2[10];
        sscanf(s,"%s%s",s1,s2);
        index.insert(pair<string,string>(s2,s1));
    }
    map<string,string>::iterator it;
    while(gets(s))
    {
        if(s[0] == '\0')
            break;
        it = index.find(s);
        if(it == index.end())
            printf("eh\n");
        else
            cout<<it->second<<endl;

    }

}
