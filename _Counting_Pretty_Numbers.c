#include<stdio.h>

int main()
{
    int t;
    int l,r,i;
    int count;
    scanf("%d",&t);
    while(t--)
    {
        count=0;
        scanf("%d %d",&l,&r);
        for(i=l;i<=r;i++)
        {
            if(i%10==2||i%10==3||i%10==9)
            {
                count++;
            }
        }
        printf("%d
",count);
    }
    return 0;
}