#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

long long int sum(int a,int b)
{
    long long ans=1;
    if(b > a-b)
        b = a-b;
    for(int i=0;i<b;i++)
    {
        ans = ans*(a-i)/(1+i);
    }
    return ans;
}

int main(void)
{
    int a,b;
    long long int ans;
    while(1)
    {
        cin>>a>>b;
        if(a==0 && b==0)
            break;
        ans = sum(a,b);
        cout<<ans<<endl;
    }

    return 0;
}
