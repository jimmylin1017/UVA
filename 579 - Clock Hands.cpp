#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;


int main(void)
{
    double h,m,hh,mm,ans;
    while(scanf("%lf:%lf",&h,&m)==2)
    {
        if(h == 0 && m == 0)
            break;
        if(h == 12)
            h = 0;
        hh = h*30 + m*0.5;
        mm = m*6;
        ans = hh - mm;
        if(ans < 0) ans*=-1;
        if(ans > 180) ans = 360 - ans;
        printf("%.3lf\n",ans);


    }

    return 0;
}
