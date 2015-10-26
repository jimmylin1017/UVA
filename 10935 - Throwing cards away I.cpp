#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <queue>

using namespace std;


int main(void)
{
    queue<int> que;
    int n;
    while(scanf("%d",&n)==1 && n)
    {
        for(int i=1;i<=n;i++)
            que.push(i);
        if(n == 1)
            printf("Discarded cards:");
        else
            printf("Discarded cards: ");
        while(que.size() != 1)
        {
            printf("%d",que.front());
            que.pop();
            que.push(que.front());
            que.pop();
            if(que.size() >= 2)
                printf(", ");
        }
        printf("\n");
        printf("Remaining card: %d\n",que.front());
        que.pop();
    }

    return 0;
}
