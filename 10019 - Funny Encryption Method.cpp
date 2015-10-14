#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int dec(int n)
{
    int count=0;
    while(n!=0)
    {
        if(n%2 == 1)
            count++;
        n/=2;
    }

    return count;
}

int hex(int n)
{
    int count=0;
     while(n!=0)
    {
        int m = n%10;
        while(m!=0)
        {
            if(m%2 == 1)
                count++;
            m/=2;
        }
        n/=10;
    }
    return count;
}


int main(void)
{
    int input;
    cin>>input;
    while(input--)
    {
        int n;
        cin>>n;
        cout<<dec(n)<<" "<<hex(n)<<endl;
    }

    return 0;
}
