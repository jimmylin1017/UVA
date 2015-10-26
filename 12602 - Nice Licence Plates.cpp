#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;


int main(void)
{
    int input;
    cin>>input;
    getchar();
    while(input--)
    {
        string s;
        int n,m;
        getline(cin,s,'-');
        cin>>n;
        getchar();
        m = (int)(s[0]-'A')*26*26 + (int)(s[1]-'A')*26 + (int)(s[2]-'A');
        if(abs(n-m) <= 100)
            cout<<"nice"<<endl;
        else
            cout<<"not nice"<<endl;
    }

    return 0;
}
