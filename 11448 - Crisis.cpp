#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(void)
{
    long long int num;
    while(1)
    {
        cin>>num;
        long long int a,b;
        while(num--)
        {
            cin>>a>>b;
            cout<<a-b<<endl;

        }
    }

    return 0;
}
