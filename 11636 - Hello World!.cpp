#include <stdio.h>
#include <stdlib.h>

int two(int n)
{
    int a=1,b=0;
    while(n>a)
    {
        a=a*2;
        b++;
    }
    return b;
}

int main(void)
{
    int n;
    int c=1;
    while(scanf("%d",&n)==1)
    {
        if(n==-1)
            break;
        else if(n<=0 || n>10000)
            continue;
        else
        {
            printf("Case %d: %d\n",c,two(n));
            c++;
        }
    }

    return 0;
}
