#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <stack>
#include <algorithm>
#include <cmath>
using namespace std;

bool l(char c) {
	if (c == '(' || c == '[' || c == '<' || c == '{')
		return true;
	return false;
}

bool r(char c) {
	if (c == ')' || c == ']' || c == '>' || c == '}')
		return true;
	return false;
}

int main()
{freopen("input.txt","r",stdin);
    stack<char> stk;
    char s[3001];
    while(gets(s))
    {
        while(!stk.empty()) stk.pop();
        int count = 0;
        bool judge = true;
        int mod = 0;
		int len = strlen(s);
		for(int i=0;i<len;i++)
        {
            mod = 0;
            count++;
            if(l(s[i]))
            {
                mod = 1;
                if(s[i] == '(' && s[i+1] == '*')
                {
                    stk.push(s[i+1]);
                    i++;
                }
                else
                {
                    stk.push(s[i]);
                }
            }
            else if(r(s[i]) || (s[i] == '*' && s[i+1] == ')'))
            {
                mod = 2;
                if (stk.empty())
                {
                    judge = false;
                    break;
                }

                if(s[i] == '*')
                {
                    if(stk.top() != '*')
                    {
                        judge = false;
                        break;
                    }
                    stk.pop();
                    i++;
                }
                else if(s[i] == ')')
                {
                    if (stk.top() != '(')
					{
                        judge = false;
                        break;
                    }
					stk.pop();
                }
                else if(s[i] == ']')
                {
                    if (stk.top() != '[')
					{
                        judge = false;
                        break;
                    }
					stk.pop();
                }
                else if(s[i] == '>')
                {
                    if (stk.top() != '<')
					{
                        judge = false;
                        break;
                    }
					stk.pop();
                }
                else if(s[i] == '}')
                {
                    if (stk.top() != '{')
					{
                        judge = false;
                        break;
                    }
					stk.pop();
                }
            }
        }
        if(!stk.empty()) judge = false;
        if(judge)
        {
            printf("YES\n");
        }
        else
        {
            if(mod==1 && !stk.empty() || mod==0 && !stk.empty()) count++;
            printf("NO %d\n", count);
        }
    }
    return 0;
}
