#include <iostream>
#include<stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

char change(int c)
{
    if(c<=9 && c>=0)
        return 48+c;
    return 'A'+(c-10);
}

string hex(int n)
{
    string s;
    while(n!=0)
    {
        s = change(n%16) + s;
        n/=16;
    }
    return s;
}

long long int dec(string s)
{
    long long int n=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A')
            n = n+(10+s[i]-'A')*pow(16,s.size()-i-1);
        else
            n = n+(s[i]-'0')*pow(16,s.size()-i-1);
    }
    return n;
}

int main(void)
{
    string s;
    int n;
    int judge = 10;
    while(1)
    {
        judge = 10;
        cin>>s;
        if(s[0] == '-')
            break;
        if(s[1]=='x')
        {
            s[1]=' ';
            stringstream tmp(s);
            tmp>>n>>s;
            judge = 16;
        }
        else
        {
            stringstream tmp(s);
            tmp>>n;
        }
        if(judge == 10)
            cout<<"0x"<<hex(n)<<endl;
        else
            cout<<dec(s)<<endl;
    }
}
