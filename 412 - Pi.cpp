#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#define MAX 50
using namespace std;


int GCD(int a, int b)
{
    if(a<b)
        return GCD(b,a);
    else if(b == 0)
        return a;
    else
        return GCD(b,a%b);
}

int sum(int n)
{
    if(n==0)
        return 0;
    return n+sum(n-1);
}

int main(void)
{
    double ans;
    int num[MAX];
    while(1)
    {
        int input;
        int count=0;
        cin>>input;
        if(input == 0)
            break;
        for(int i=0;i<input;i++)
        {
            cin>>num[i];
        }
        for(int i=0;i<input;i++)
        {
            for(int j=i+1;j<input;j++)
            {
                if(GCD(num[i],num[j])==1)
                {
                    count++;
                }
            }
        }
        if(count == 0)
            cout<<"No estimate for this data set."<<endl;
        else
        {
            ans = sqrt((double)6*sum(input-1)/count);
            printf("%.6lf\n",ans);
        }
    }

    return 0;
}
