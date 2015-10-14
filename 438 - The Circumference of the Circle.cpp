#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

//三角形面積 = a*b*c/(4R)   R:外接圓半徑

int main(void)
{
    double x1,y1,x2,y2,x3,y3,area,r,a,b,c,ans;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3)
    {
        a = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        b = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
        c = sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));

        area = 0.5*fabs(x1*y2+x2*y3+x3*y1-x2*y1-x3*y2-x1*y3);
        r = a*b*c/(4*area);
        ans = 2*acos(-1)*r;
        printf("%.2lf\n",ans);
    }

    return 0;
}
