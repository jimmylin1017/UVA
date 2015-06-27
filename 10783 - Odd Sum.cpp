#include <stdio.h>
#include <stdlib.h>

int odd(int n)
{
    if(n%2!=0)
        return 1;
    else
        return 0;
}

int main(void)
{
    int t=0,sum=0,c=1;
    while(t>100 || t<1)
        scanf("%d",&t);
    while(t!=0)
    {
        int a=-1,b=-1;
        while(1)
        {
            while(a>100 || a<0)
                scanf("%d",&a);
            while(b>100 || b<0)
                scanf("%d",&b);
            if(a>b)
                continue;
            else
                break;
        }

        for(int i=a;i<=b;i++)
        {
            if(odd(i))
                sum=sum+i;
        }
        printf("Case %d: %d\n",c,sum);
        c++;
        t--;
        sum=0;
    }

}
