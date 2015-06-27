#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    int num[2*t];
    for(int i=0;i<2*t;i=i+2)
    {
        scanf("%d %d",&num[i],&num[i+1]);
        if(num[i] < num[i+1])
            printf("<\n");
        else if(num[i] > num[i+1])
            printf(">\n");
        else
            printf("=\n");
    }

}
