#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <queue>
#include <stack>

using namespace std;


int main(void)
{
    queue<int> que;
    priority_queue<int> pque;
    stack<int> stk;
    bool bstk,bque,bpque;
    int n;
    while(scanf("%d",&n) != EOF)
    {
        int a,b;
        bstk = true;
        bque = true;
        bpque = true;
        while( !stk.empty() ) stk.pop();
        while( !que.empty() ) que.pop();
        while( !pque.empty() ) pque.pop();
        for(int i=1;i<=n;i++)
        {
            scanf("%d%d",&a,&b);
            if(a == 1)
            {
                que.push(b);
                pque.push(b);
                stk.push(b);
            }
            else if(a == 2)
            {
                if(bstk)
                {
                    if(!stk.empty() && stk.top() == b)
                        stk.pop();
                    else
                        bstk = false;
                }
                if(bque)
                {
                    if(!que.empty() && que.front() == b)
                        que.pop();
                    else
                        bque = false;
                }
                if(bpque)
                {
                    if(!pque.empty() && pque.top() == b)
                        pque.pop();
                    else
                        bpque = false;
                }
            }
        }
        if((bstk && bque) || (bstk && bpque) || (bpque && bque))
            printf("not sure\n");
        else if(bstk)
            printf("stack\n");
        else if(bque)
            printf("queue\n");
        else if(bpque)
            printf("priority queue\n");
        else
            printf("impossible\n");
    }

    return 0;
}
