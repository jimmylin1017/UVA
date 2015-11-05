#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	double s,a;
	string ss;
	while(cin>>s>>a>>ss)
	{
		if(ss == "min") a/=60;
		if(a > 180) a = 360 - a;

		double ang = a*acos(-1)/180;
		double arc = 2 * acos(-1) * (s + 6440) * (a/360);
		double chord = (s + 6440) * sin(ang/2) * 2;

		printf("%.6lf %.6lf\n",arc,chord);
	}

	return 0;
}