#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>

using namespace std;

typedef struct node
{
    string s;
    int count;
}Node;


int cal(Node a)
{
    int count = 0;
    for (int i=0;i<a.s.size();i++)
        for (int j=i+1;j<a.s.size();j++)
            if ( a.s[i] > a.s[j] )
                count++;
    return count;
}

bool cmp(Node a,Node b)
{
    return a.count < b.count;
}

int main(void)
{
    Node mynode[100];
    int M,n,m;
    cin>>M;
    getchar();
    for(int i=0;i<M;i++)
    {
        cin>>n>>m;
        for(int j=0;j<m;j++)
        {
            cin>>mynode[j].s;
            mynode[j].count = cal(mynode[j]);
        }
        stable_sort(mynode,mynode+m,cmp);
        for(int j=0;j<m;j++)
        {
            cout<<mynode[j].s<<endl;
        }
        if(i+1 != M)
            cout<<endl;
    }

    return 0;
}
