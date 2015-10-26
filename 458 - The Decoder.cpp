#include <iostream>

using namespace std;


int main(void)
{
    int n = '*'-'1';
    string s;
    while(getline(cin,s))
    {
        for(int i=0;i<s.size();i++)
        {
            cout<<(char)(s[i]+n);
        }
        cout<<endl;
    }
    return 0;
}
