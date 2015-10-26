#include <iostream>
#include<stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <cmath>
using namespace std;


int main(void)
{
    int input;
    cin>>input;
    while(input--)
    {
        int a,b,c,w,count = 0;
        cin>>a>>b>>c;
        w = a+b;
        while(w >= c)
        {
            count = count + w/c;
            w = w%c + w/c;
        }
        cout<<count<<endl;

    }
}
