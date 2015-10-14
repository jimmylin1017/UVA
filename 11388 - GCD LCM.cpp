#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(void)
{
    int input;
    cin>>input;
    while(input--)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)
        {
            int t = b;
            b = a;
            a = t;
        }
        if(b%a!=0)
            cout<<"-1"<<endl;
        else
            cout<<a<<" "<<b<<endl;
    }

    return 0;
}
