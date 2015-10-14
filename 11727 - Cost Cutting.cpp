#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main(void)
{
    int a[3]={0};
    int t;
    int c=1;
    while(scanf("%d",&t)==1)
    {
        if(t<20)
            break;
    }
    for(int j=0;j<t;j++)
    {
         for(int i=0;i<3;i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a, a+3);

        printf("Case %d: %d\n",c,a[1]);
        c++;
    }

    return 0;
}
