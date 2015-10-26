#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{

    int input,kase = 0;
    cin>>input;
    while(input--)
    {
        int num;
        string s;
        int count=0;
        cin>>num>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='.')
            {
                count++;
                i+=2;
            }
        }
        kase++;
        cout<<"Case "<<kase<<": "<<count<<endl;
    }

    return 0;
}
