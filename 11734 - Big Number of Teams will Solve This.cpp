#include <iostream>
#include<stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <cmath>
using namespace std;


int main(void)
{
    int input,c=1;
    cin>>input;
    getchar();
    while(input--)
    {
        string s,ss;
        getline(cin,s,'\n');
        getline(cin,ss,'\n');
        //cout<<s<<endl<<ss<<endl;

        if(s == ss)
            printf("Case %d: Yes\n",c++);
        else if(s.find(" ")!=-1)
        {
            string sr ="";
            for(int i=0;i<s.size();i++)
            {
                if(s[i]==' ')
                    continue;
                sr+=s[i];
            }
            if(sr == ss)
                printf("Case %d: Output Format Error\n",c++);
            else
                printf("Case %d: Wrong Answer\n",c++);
        }
        else
            printf("Case %d: Wrong Answer\n",c++);

    }
}
