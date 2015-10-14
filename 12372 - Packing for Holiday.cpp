#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int cl(int l)
{
    if(l<=20)
        return 1;
    else
        return 0;
}

int cw(int w)
{
    if(w<=20)
        return 1;
    else
        return 0;
}

int ch(int h)
{
    if(h<=20)
        return 1;
    else
        return 0;
}

int main(void)
{
    int t;
    int l,w,h;
    cin>>t;
    while(t>100)
        cin>>t;

    for(int i=0;i<t;i++)
    {
        cin>>l>>w>>h;
        while(l<1 || l>50 || w<1 || w>50 || h<1 || h>50 )
                cin>>l>>w>>h;

        if((cl(l)+ch(h)+cw(w)) == 3)
            printf("Case %d: good\n",i+1);
        else
            printf("Case %d: bad\n",i+1);
    }

    return 0;
}
