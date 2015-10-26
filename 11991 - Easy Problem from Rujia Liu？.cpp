#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>

using namespace std;

vector<int> vec[1000001];
int main(void)
{
    int n,m;

    while(scanf("%d %d",&n,&m) != EOF)
    {

        for(int i=0;i<n;i++)
        {
            int num;
            cin>>num;
            vec[num].push_back(i+1);
        }
        while(m--)
        {
            int k,v;
            cin>>k>>v;
            if(k > vec[v].size())
                cout<<"0"<<endl;
            else
                cout<<vec[v][k-1]<<endl;
        }
        for(int i=0; i<1000001; i++)
            vec[i].clear();
    }

    return 0;
}
