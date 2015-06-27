#include <stdio.h>
#include <stdlib.h>

int summing(long long int n)
{
    int sum=0;
    if(n<10)
        return n;
    while(!(n<10))
    {
        sum=0;
        while(n>0)
        {
            sum=sum+(n%10);
            n=n/10;
        }
        n=sum;
    }
    return n;
}

int main(void)
{
    long long int n;
    while( scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        printf("%d\n",summing(n));
    }


}
