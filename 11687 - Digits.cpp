#include <iostream>
#include<stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <cmath>
using namespace std;


int cc(int n)
{
    int c = 0;
    while(n > 0)
    {
        n/=10;
        c++;
    }
    return c;
}

int main(void)
{
    string s;
    cin>>s;
    while(s != "END")
    {
        int c = s.size(),count = 0;
        while(c != 1)
        {
            c = cc(c);
            count++;
        }
        if(s == "1")
            cout<<count+1<<endl;
        else
            cout<<count+2<<endl;
        cin>>s;
    }
}
