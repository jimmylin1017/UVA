#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <cmath>
using namespace std;

bool cmp(string a,string b)
{
    return (a+b>b+a);
}

int main(void)
{
    string num[50];
    int n;
    while(cin>>n && n)
    {
        for(int i=0;i<n;i++)
        {
            cin>>num[i];
        }
        sort(num,num+n,cmp);
        for(int i=0;i<n;i++)
        {
            cout<<num[i];
        }
        cout<<endl;
    }

}
