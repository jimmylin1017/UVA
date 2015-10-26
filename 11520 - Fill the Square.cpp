#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <cmath>
using namespace std;


int main(void)
{
    int input;
    int kase = 1;
    cin>>input;
    while(input--)
    {
        int n;
        cin>>n;
        string c[11];
        for(int i=0;i<n;i++)
        {
            cin>>c[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(c[i][j] == '.')
                {
                    for(char k='A';k<='Z';k++)
                    {
                        if(i == 0 && j == 0)
                        {
                            if(c[i+1][j] != k && c[i][j+1] != k)
                            {
                                c[i][j] = k;
                                break;
                            }
                        }
                        else if(i==0)
                        {
                            if(c[i+1][j] != k && c[i][j+1] != k && c[i][j-1] != k)
                            {
                                c[i][j] = k;
                                break;
                            }
                        }
                        else if(j==0)
                        {
                            if(c[i+1][j] != k && c[i-1][j] != k && c[i][j+1] != k )
                            {
                                c[i][j] = k;
                                break;
                            }
                        }
                        else
                        {
                            if(c[i+1][j] != k && c[i-1][j] != k && c[i][j+1] != k && c[i][j-1] != k)
                            {
                                c[i][j] = k;
                                break;
                            }
                        }

                    }
                }
            }
        }
        printf("Case %d:\n",kase++);
        for(int l=0;l<n;l++)
        {
            cout<<c[l]<<endl;
        }
    }

    return 0;
}
