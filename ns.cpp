#include<stdio.h>
int main()
{
    int a=0,b,c,count=0;
    while(a!=-1)
    {
        scanf("%d",&a);
        if(c!=a)
            count++;
        c=a;
    }
    
    printf("%d",count-1);
    return 0;
}