#include <iostream>
#include<stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <string>
using namespace std;



void change(int n)
{
    string s;
    int c;
    c=0;
    while(n!=0)
    {
        if(n%2==1)
        {
            c++;
            s = '1'+s;
        }
        else
            s = '0'+s;
        n/=2;
    }
    cout<<"The parity of "<<s<<" is "<<c<<" (mod 2)."<<endl;
}

int main(void)
{
    int n;
    while(1)
    {
        cin>>n;
        if(n==0)
        break;
        change(n);
    }


}
