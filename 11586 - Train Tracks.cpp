#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <sstream>
#include <string>

using namespace std;

int main(void)
{
    int n;
    char a;
    int check=1;
    cin>>n;
    cin.get(a);
    while(n--)
    {
        string ss,s;
        getline(cin,ss);
        int m=0,f=0;
        stringstream tmp(ss);
        while( tmp>>s)
        {
            if(s[0]=='M')
                m++;
            else
                f++;
            if(s[1] == 'M')
                m++;
            else
                f++;
        }
        if(m==f && m>1)
            cout<<"LOOP"<<endl;
        else
            cout<<"NO LOOP"<<endl;
    }

    return 0;
}
