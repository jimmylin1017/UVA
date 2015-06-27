#include <iostream>
#include<stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int change(string s)
{
    int num=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[s.size()-1-i]=='1')
        {
            num = num + pow(2,i);
        }
    }
    return num;
}

int GCD(int a, int b)
{
    if(a<b)
        return GCD(b,a);
    else if(b == 0)
        return a;
    else
        return GCD(b,a%b);
}


int main(void)
{
    int input;
    cin>>input;
    for(int i=1;i<=input;i++)
    {
        string s1,s2;
        cin>>s1>>s2;
        cout<<"Pair #"<<i<<": ";
        if(GCD(change(s1),change(s2)) == 1)
            cout<<"Love is not all you need!"<<endl;
        else
            cout<<"All you need is love!"<<endl;
    }

}
