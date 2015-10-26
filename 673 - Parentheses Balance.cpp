#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stack>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    stack<char> stk;
    int input;
    cin>>input;
    getchar();
    while(input--)
    {
        while(!stk.empty()) stk.pop();
        bool judge = true;
        string s;
        getline(cin,s);
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '(' || s[i] == '[')
                stk.push(s[i]);
            else if(s[i] == ')')
            {
                if(stk.empty() || stk.top() != '(')
                {
                    judge = false;
                    break;
                }
                stk.pop();
            }
            else if(s[i] == ']')
            {
                if(stk.empty() || stk.top() != '[')
                {
                    judge = false;
                    break;
                }
                stk.pop();
            }
        }
        if(!stk.empty()) judge = false;
        judge ? cout<<"Yes"<<endl : cout<<"No"<<endl;
    }
    return 0;
}
