#include <iostream>
#include<stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <cmath>
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
}
