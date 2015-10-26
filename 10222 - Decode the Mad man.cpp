#include <iostream>
#include<stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <cmath>
using namespace std;


int main(void)
{
    char index[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string s;
    getline(cin,s,'\n');
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ')cout<<" ";
        else
        {
            for(int j=0;j<sizeof(index)/sizeof(index[0]);j++)
            {
                s[i] = tolower(s[i]);
                if(s[i] == index[j])
                {
                    cout<<index[j-2];
                    break;
                }
            }
        }
    }
    cout<<endl;
}
