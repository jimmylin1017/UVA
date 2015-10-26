#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <queue>
#include <algorithm>
#include <cmath>
using namespace std;


int main(void)
{
    priority_queue<int,vector<int>,greater<int> > que;
    int n;
    while(scanf("%d",&n)==1 && n)
    {
        for(int i=1;i<=n;i++)
        {
            int m;
            scanf("%d",&m);
            que.push(m);
        }
        int sum = 0;
        while(que.size()!=1)
        {
            int a,b;
            a = que.top();
            que.pop();
            b = que.top();
            que.pop();
            que.push(a+b);
            sum = sum + a + b;
        }
        printf("%d\n",sum);
        que.pop();
    }

    return 0;
}
