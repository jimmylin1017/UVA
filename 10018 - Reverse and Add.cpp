#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;


long long re(long long int n)
{
    long long rn = 0;
    while(n!=0)
    {
        rn = rn*10 + n%10;
        n = n/10;
    }
    return rn;
}

int main(void)
{
    int input;
    cin>>input;
    while(input--)
    {
        long long int n;
        int count = 0;
        cin>>n;
        while(n != re(n))
        {
            n = n+re(n);
            count++;
        }
        cout<<count<<" "<<n<<endl;

    }

    return 0;
}
