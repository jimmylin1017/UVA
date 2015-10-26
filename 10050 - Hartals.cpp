#include <iostream>
#include<stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <cmath>
using namespace std;


int main(void)
{
    int input;
    cin>>input;

    while(input--)
    {
        int n,p;
        cin>>n>>p;
        bool day[n];
        for(int i=0;i<n;i++)
            day[i] = true;
        for(int i=0;i<p;i++)
        {
            int m;
            cin>>m;
            for(int i=0;i<n;i++)
            {
                if(i%7 == 5 || i%7 == 6)
                    continue;
                else if(i%m == m-1)
                {
                    day[i] = false;
                }
            }
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(!day[i])
                count++;
        }
        cout<<count<<endl;
    }
}
