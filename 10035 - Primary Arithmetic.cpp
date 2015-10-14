#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(void)
{
    long long int a,b;
    while(1)
    {
        int j=0,c=0;
        cin>>a>>b;
        while(a < 0 || b < 0)
            cin>>a>>b;
        if(a ==b && a == 0)
        {
            break;
        }

        while(a >0 || b > 0)
        {
            j = (a%10 + b%10+ j)/10;
            if(j ==1)
                c++;
            a/=10;
            b/=10;
        }
        if(c>1)
            cout<<c<<" carry operations."<<endl;
        else if(c == 1)
            cout<<c<<" carry operation."<<endl;
        else
            cout<<"No carry operation."<<endl;

    }

    return 0;
}
