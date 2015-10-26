#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <cmath>
using namespace std;

typedef struct node
{
    int num,mod;
}Node;

bool compare(Node a,Node b)
{
    if(a.mod != b.mod)
        return a.mod < b.mod;
    else if(a.num%2 == 0 && b.num%2 == 0)
        return a.num < b.num;
    else if((a.num%2 == 1 || a.num%2 == -1) && (b.num%2 == 1 || b.num%2 == -1))
        return a.num > b.num;
    else
        return (a.num%2 == 1 || a.num%2 == -1);
}


int main(void)
{
    Node mynode[10000];
    int m,n;
    while(cin>>n>>m)
    {
        if(n==0 && m==0)
        {
            cout<<n<<" "<<m<<endl;
            break;
        }
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            mynode[i].num = a;
            mynode[i].mod = a%m;
        }
        sort(mynode,mynode+n,compare);
        cout<<n<<" "<<m<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<mynode[i].num<<endl;
        }
    }
}
