#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

// r = 2*�T�����n/�P��

int main(void)
{
    double a,b,c;
    double p,r;
    while(cin>>a>>b>>c)
    {
        p = (a+b+c)/2+1e-8;
        r = sqrt((p-a)*(p-b)*(p-c)/p);
        printf("The radius of the round table is: %.3f\n",r);

    }

    return 0;
}
