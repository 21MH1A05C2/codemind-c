#include<stdio.h>
int main()
{
    int i,j,n,x;
    scanf("%d",&n);
    for(i=1;i<n+1;i++)
    {
        for(j=1;j<n+1;j++)
        {
            if(i==j || i==n+1-j)
            {
                printf("x");
            }
            else
            {
                printf("0");
            }
        }
        printf("
");
    }
}