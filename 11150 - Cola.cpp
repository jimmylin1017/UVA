#include <iostream>
#include<stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <cmath>
using namespace std;


int main(void)
{
    int n;
    while(cin>>n)
    {
        int c = n;
        while(n>2)
        {
            c = c+n/3;
            n = n/3 + n%3;
        }
        if(n==2)
        {
            c++;
        }
        cout<<c<<endl;

    }
}
