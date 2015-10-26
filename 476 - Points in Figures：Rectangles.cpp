#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
using namespace std;


int main(void)
{
    double xy[10][4];
    double x,y;
    char c;
    int point = 1;
    int count=0;
    while(cin>>c)
    {
        if(c == '*')
            break;

        cin>>xy[count][0]>>xy[count][1]>>xy[count][2]>>xy[count][3];
        count++;

    }
    while(cin>>x>>y)
    {
        bool judge = false;
        if(x==9999.9 && y==9999.9)
            break;
        for(int i=0;i<count;i++)
        {
            if(x <  xy[i][2] && x > xy[i][0] && y > xy[i][3] && y < xy[i][1])
            {
                cout<<"Point "<<point<<" is contained in figure "<<i+1<<endl;
                judge = true;
            }
        }
        if(!judge)
            cout<<"Point "<<point<<" is not contained in any figure"<<endl;
        point++;
    }




    return 0;
}
