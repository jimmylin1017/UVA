#include <iostream>
#include <vector>
using namespace std;
vector<int> node[110];

int main(void)
{

    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        for(int j=0;j<110;j++)
            node[j].clear();
        int n,m,arr[110],sum=0,loc=0;
        cin>>n>>m;
        for(int j=0;j<n;j++)
            cin>>arr[j];
        for(int j=0;j<m;j++)
        {
            int a,b;
            cin>>a>>b;
            node[a].push_back(b);
        }
        while(!node[loc].empty())
        {
            int max = 0,locs = 0;
            for(int j=0;j<node[loc].size();j++)
            {
                int num = arr[node[loc][j]];
                if(num > max)
                {
                    locs = node[loc][j];
                    max = num;
                }
            }
            sum += max;
            loc = locs;
        }

        cout<<"Case "<<i<<": ";
        cout<<sum<<" "<<loc<<endl;
    }
}
