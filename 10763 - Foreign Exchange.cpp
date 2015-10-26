#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <cmath>
using namespace std;

int num1[500000];
int num2[500000];

int main(void)
{
    int n;
    while(cin>>n && n)
    {
        bool judge = true;
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            num1[i] = a;
            num2[i] = b;
        }
        sort(num1,num1+n);
        sort(num2,num2+n);
        for(int i=0;i<n;i++)
        {
            if(num1[i] != num2[i])
            {
                judge = false;
                break;
            }
        }
        judge ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
}
