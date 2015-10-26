#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>

using namespace std;

int num[2000000];

int main(void)
{
    int n;
    while(cin>>n && n)
    {
        for(int i=0;i<n;i++)
        {
            cin>>num[i];
        }
        sort(num,num+n);
        for(int i=0;i<n;i++)
        {
            cout<<num[i];
            if(i+1 != n)
                cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}
