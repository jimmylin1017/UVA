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
        int a,b,c,w,count = 0;
        cin>>a>>b>>c;
        w = a+b;
        while(w >= c)
        {
            count = count + w/c;
            w = w%c + w/c;
        }
        cout<<count<<endl;
    }

    return 0;
}
