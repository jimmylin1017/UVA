#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(void)
{
    long long int a,b;

    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        if(a>b)
            printf("%lld\n",a-b);
        else
            printf("%lld\n",b-a);
    }
    
    return 0;
}
