#include <iostream>

using namespace std;

char arr[110][110] = {'*'};


void DFS(int i,int j)
{
    if(arr[i][j] == '@')
    {
        arr[i][j] = '*';
        DFS(i+1,j);
        DFS(i-1,j);
        DFS(i,j+1);
        DFS(i,j-1);
        DFS(i+1,j+1);
        DFS(i+1,j-1);
        DFS(i-1,j+1);
        DFS(i-1,j-1);
    }
}

int main(void)
{
    int m,n,count;

    while(1)
    {
        cin>>m>>n;
        count = 0;
        if(!m)
            break;

        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cin>>arr[i][j];
            }
        }
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(arr[i][j] == '@')
                {
                    arr[i][j] = '*';
                    DFS(i+1,j);
                    DFS(i-1,j);
                    DFS(i,j+1);
                    DFS(i,j-1);
                    DFS(i+1,j+1);
                    DFS(i+1,j-1);
                    DFS(i-1,j+1);
                    DFS(i-1,j-1);
                    count++;
                }
            }
        }

        cout<<count<<endl;

    }

    return 0;
}
