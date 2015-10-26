#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
#define SIZE 110

char arr1[SIZE][SIZE];
char arr2[SIZE][SIZE];
int area;

void DFS(int i,int j)
{
    if(arr2[i][j] == 'W')
    {
        arr2[i][j] = 'L';
        area++;
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
    int t;
    cin>>t;
    getchar();
    getchar();

    while(t--)
    {
        for(int i=0;i<SIZE;i++)
        {
            for(int j=0;j<SIZE;j++)
            {
                arr1[i][j] = 'L';
                 arr2[i][j] = 'L';
            }
        }

        string s;
        int line = 1;
        int a,b;
        while(getline(cin,s))
        {
            if(s[0]=='L' || s[0] == 'W')
            {
                for(int i=1;i<=s.size();i++)
                    arr1[line][i] = s[i-1];
                line++;
            }
            else if(sscanf(s.c_str(),"%d %d",&a,&b) == 2)
            {
                area = 0;
                for(int i=0;i<SIZE;i++)
                    strcpy(arr2[i],arr1[i]);
                DFS(a,b);
                cout<<area<<endl;
            }
            else
            {
                cout<<endl;
                break;
            }
        }
    }
}
