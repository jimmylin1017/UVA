#include <iostream>
#include<stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main(void)
{
    int t;
    cin>>t;
    int r;
    while(t--)
    {
        cin>>r;
        int s[r];
        int d=0;
        for(int i=0;i<r;i++)
        {
            cin>>s[i];
        }
        sort(s,s+r);
        for(int i=0;i<r;i++)
            d+=abs(s[r/2] - s[i]);
        cout<<d<<endl;

    }
}
