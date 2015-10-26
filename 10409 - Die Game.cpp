#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;


int main(void)
{
    int input;
    int up, down, north, east, south, west;
    while(scanf("%d",&input) && input)
    {
        up = 1;  down = 7-up;
        north = 2;  south = 7-north;
        west = 3;  east = 7-west;

        while(input--)
        {
            string s;
            cin>>s;
            if(s[0] == 'n')
            {
                int temp = up;
                up = south;  down = 7-up;
                north = temp;  south = 7-north;
            }
            else if(s[0] == 'e')
            {
                int temp = down;
                up = west;  down = 7-up;
                west = temp;  east = 7-west;
            }
            else if(s[0] == 'w')
            {
                int temp = up;
                up = east;  down = 7-up;
                west = temp;  east = 7-west;
            }
            else if(s[0] == 's')
            {
                int temp = down;
                up = north;  down = 7-up;
                north = temp;  south = 7-north;
            }
        }
        cout<<up<<endl;
    }

    return 0;
}
