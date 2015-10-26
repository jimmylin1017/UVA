#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
using namespace std;


int main(void)
{
    int n,h[50],count = 0;
    while(cin>>n && n)
    {
        int sum = 0;
        int move = 0;
        count++;
        for(int i=0;i<n;i++)
        {
            cin>>h[i];
            sum+=h[i];
        }
        for(int i=0;i<n;i++)
        {
            int avg = sum/n;
            if(h[i] < avg)
                move = move + (avg - h[i]);
        }

        cout<<"Set #"<<count<<endl<<"The minimum number of moves is "<<move<<"."<<endl<<endl;
    }
    return 0;
}
