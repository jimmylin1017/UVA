#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(void)
{
    int n;
    long long int area[101][101]={0};
    cin>>n;
    while(n>300)
        cin>>n;
    int count=0;
    while(n--)
    {
       int check=0;
       int num;
       char c;
        cin>>c>>c>>num;
        while(num < 1 || num > 100)
        {
            cin>>c>>c>>num;
        }

        for(int i=1;i<=num;i++)
        {
            for(int j=1;j<=num;j++)
            {
                cin>>area[i][j];
                if(area[i][j] < 0)
                    check=1;
            }
        }
        for(int i=1;i<=num;i++)
        {
            for(int j=1;j<=num;j++)
            {
                if(area[i][j] != area[num-i+1][num-j+1])
                {
                    check = 1;
                    break;
                }
            }
            if(check == 1)
                break;
        }
        if(check ==0)
            cout<<"Test #"<<++count<<": Symmetric."<<endl;
        else
            cout<<"Test #"<<++count<<": Non-symmetric."<<endl;
    }
    
    return 0;
}
