
#include<stdio.h>
int main()
{
    int n,r,m=1,s=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        s=s+r;
        m=m*r;
        n=n/10;
    }
    if(s==m)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}
