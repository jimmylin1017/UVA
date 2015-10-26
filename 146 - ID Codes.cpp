#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;


int main(void)
{
    char s[100] = {};
    char ss[100] = {};
    while(scanf("%s",s)==1)
    {
        if(s[0]=='#')
            break;
        int len = strlen(s);
        strcpy(ss,s);
        sort(ss,ss+len);
        prev_permutation(ss,ss+len);
        if(strcmp(s,ss))
        {
            next_permutation(s,s+len);
            printf("%s\n",s);
        }
        else
            printf("No Successor\n");
    }
}
