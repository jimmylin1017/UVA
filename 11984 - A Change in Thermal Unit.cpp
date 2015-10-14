#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

float C(float f)
{
    return (f-32)*5/9;
}

float F(float c)
{
    return (9*c/5)+32;
}


int main(void)
{
    int t;
    float c,f;
    float a;
    int b=1;
    cin>>t;
    while(t>100)
        cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>c>>f;
        a = F(c)+f;
        printf("Case %d: %.2f\n",b,C(a));
        b++;
    }

    return 0;
}
