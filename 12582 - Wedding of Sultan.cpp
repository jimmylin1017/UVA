#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> node[26];

int main(void)
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        for(int j=0;j<26;j++)
            node[j].clear();
        string s;
        cin>>s;
        int a,b;
        a = s[0]-'A';

        for(int j=1;j<s.size();j++)
        {
            b = s[j]-'A';
            if(b != a)
            {
                node[a].push_back(b);
                node[b].push_back(a);
                a = b;
            }
            else if(b == a)
            {
                a = node[b].front();
            }
        }

        cout<<"Case "<<i<<endl;
        for(int j=0;j<26;j++)
        {
            if(!node[j].empty())
            {
                char c = 'A' + j;
                cout<<c<<" = "<<node[j].size()<<endl;
            }
        }


    }

    return 0;
}
