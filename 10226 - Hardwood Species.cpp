#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <map>
#include <iomanip>

using namespace std;


int main(void)
{
    int input;
    cin>>input;
    getchar();
    for(int i=0;i<input;i++)
    {
        bool a = false;
        map<string,int> index;
        map<string,int>::iterator it;
        string s;
        float total = 0;
        while(getline(cin,s,'\n'))
        {
            if(s[0]=='\0' && a)
            {
                break;
            }
            if(s[0]!='\0')
            {
                a = true;
                total++;
                it = index.find(s);
                if(it == index.end())
                    index.insert(pair<string,int>(s,1));
                else
                    (it->second)++;
            }
        }
        for(it = index.begin();it!=index.end();it++)
        {
            cout<<it->first<<" "<<fixed<<setprecision(4)<<100*(it->second)/total<<endl;
        }
        if(i+1 != input)
            cout<<endl;
    }

    return 0;
}
