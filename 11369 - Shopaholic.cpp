#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>

using namespace std;


int main(void)
{
    int input;
    cin>>input;
    while(input--)
    {
        int n;
        int sum = 0;
        cin>>n;
        int m[n];
        for(int i=0;i<n;i++)
        {
            cin>>m[i];
        }
        sort(m,m+n,greater<int>());
        for(int i=0;i<(int)n/3;i++)
        {
            sum+=m[i*3+2];
        }
        cout<<sum<<endl;
    }

    return 0;
}
