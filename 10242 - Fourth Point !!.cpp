#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	double x1,y1,x2,y2,x3,y3,x4,y4;

	while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4)
	{
		double x,y;
		if(x1 == x3 && y1 == y3)
		{
			x = x4 - (x1 - x2);
			y = y4 - (y1 - y2);
		}
		if(x1 == x4 && y1 == y4)
		{
			x = x3 - (x1 - x2);
			y = y3 - (y1 - y2);
		}
		if(x2 == x3 && y2 == y3)
		{
			x = x4 - (x2 - x1);
			y = y4 - (y2 - y1);
		}
		if(x2 == x4 && y2 == y4)
		{
			x = x3 - (x2 - x1);
			y = y3 - (y2 - y1);
		}

		printf("%.3lf %.3lf\n",x,y);
	}

	return 0;
}