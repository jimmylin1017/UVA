#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

void swap(int *a,int *b)
{
    int temp;
    if((*a) > (*b))
    {
        temp = (*a);
        (*a) = (*b);
        (*b) = temp;
    }
}

int main(void)
{
    int w,h,n;
    int area[505][505] = {0};
    while(1)
    {
        cin>>w>>h>>n;
        if(w==0 && h==0 && n==0)
            break;
        if(w <1 || h < 1 || w> 500 || h >500 || n<0 || n>99)
            continue;
        for(int i=1;i<=w;i++)
        {
            for(int j=1;j<=h;j++)
            {
                area[i][j] = 1;
            }
        }
        while(n--)
        {
            int x1,x2,y1,y2;
            cin>>x1>>y1>>x2>>y2;
           if(x1 <1 || x2 < 1 || y1 <1 || y2 < 1 || x1> 500 || x2 >500 || y1> 500 || y2 >500)
                continue;
            swap(&x1,&x2);
            swap(&y1,&y2);
            for(int i=x1;i<=x2;i++)
            {
                for(int j=y1;j<=y2;j++)
                {
                    area [i][j] = 0;
                }
            }
        }
        int count=0;
        for(int i=1;i<=w;i++)
        {
            for(int j=1;j<=h;j++)
            {
                if(area[i][j] == 1)
                    count++;
            }
        }
        switch(count)
        {
        case 0:
            cout<<"There is no empty spots."<<endl;
            break;
        case 1:
            cout<<"There is one empty spot."<<endl;
            break;
        default:
            cout<<"There are "<<count<<" empty spots."<<endl;
        }
    }

    return 0;
}
