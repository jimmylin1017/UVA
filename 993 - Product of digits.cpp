#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main(void)
{
    int use = 9;
    int input;
    int n;
    string q = "";
    cin>>input;
    while(input--)
    {
        use=9;
        q = "";
        cin>>n;
        if(n==1)
        {
        	cout<<"1"<<endl;
        	continue;
        }

        while(1)
        {
            if(n%use == 0 && use > 1)
            {
                q = (char)(use+'0') + q;
                n/=use;
            }
            else if(use > 1)
                use--;
            else
                break;
        }
        if(n != 1)
            cout<<"-1"<<endl;
        else
            cout<<q<<endl;
    }

}
