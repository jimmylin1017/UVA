#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main(void)
{
    unsigned int a,b,max,count;
    while(scanf("%d %d",&a,&b) == 2)
    {
        cout<<a<<" "<<b;
        if(b<a)
        {
            int temp = a;
            a = b;
            b = temp;
        }
        max=0;
        for(int i=a;i<=b;i++)
        {
            int c = i;
            count=0;
            while(c!=1)
            {
                if(c%2 == 0)
                    c = c/2;
                else
                    c = c*3+1;
                count++;
            }
            if(count > max)
                max = count;
        }
        cout<<" "<<max+1<<endl;
    }
}
