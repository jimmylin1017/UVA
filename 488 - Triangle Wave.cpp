#include <iostream>

using namespace std;

void print(int a)
{
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    for(int i=a-1;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
        {
            cout<<i;
        }
        cout<<endl;
    }
}

int main(void)
{

    int t,a,b;
    cin>>t;

    while(t--)
    {
        cin>>a>>b;
        for(int i=0;i<b;i++)
        {
            print(a);
            if(i!=b-1)
                cout<<endl;
        }

        if(t!=0)
            cout<<endl;
    }


    return 0;
}
