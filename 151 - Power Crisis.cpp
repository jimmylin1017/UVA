#include <iostream>

using namespace std;

int f(int n, int m)
{
    int ans = 0;
    for(int i=1;i<=n;i++)
        ans = (ans+m)%i;
    return ans;
}


int main(void)
{
    int n,m;
    while(cin>>n && n)
    {
        n--;    // 1 has to delete
        for(m=1;m<n;m++)
        {
            if(f(n,m) == 11)    // answer is 12 and it's location is 11
                break;
        }
        cout<<m<<endl;
    }


    return 0;
}
