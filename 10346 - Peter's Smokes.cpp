#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;


int main(void)
{
    int n,k;
    while(scanf("%d%d",&n,&k) != EOF)
    {
        int c = n;
        while(n/k > 0)
        {
            c = c+n/k;
            n = n/k + n%k;
        }
        cout<<c<<endl;
    }

    return 0;
}
