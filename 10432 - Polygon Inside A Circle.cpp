#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.14159265

int main(void)
{
    double area;
    double r,n;

    while(scanf("%lf %lf",&r,&n) == 2)
    {
        if(!(0<r && r<20000))
            continue;
        if(!(2<n && n<20000))
            continue;
        printf("%.3lf\n",n*r*r*sin(2*acos(-1)/n)/2);
    }

    return 0;
}
