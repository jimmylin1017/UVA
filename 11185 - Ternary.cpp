#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;



void change(int n)
{
    string s;
    int c;
    c=0;
    if(n==0)
    {
        cout<<"0"<<endl;
        return;
    }
    while(n!=0)
    {
        if(n%3==1)
            s = '1'+s;
        else if(n%3==2)
            s = '2'+s;
        else
            s = '0'+s;
        n/=3;
    }
    cout<<s<<endl;
}

int main(void)
{
    int n;
    while(1)
    {
        cin>>n;
        if(n<0)
            break;
        change(n);
    }

    return 0;
}
