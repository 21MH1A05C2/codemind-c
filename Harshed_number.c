#include<stdio.h>
int main()
{
    int i,s=0,a,t;
    scanf("%d",&a);
    t=a;
    while(a!=0)
    {
        i=a%10;
        s+=i;
        a/=10;
    }
        {
        if(t%s==0)
        {
         printf("True");
        }
        else
        {
        printf("False");
        }
        return 0;
    }  
}
