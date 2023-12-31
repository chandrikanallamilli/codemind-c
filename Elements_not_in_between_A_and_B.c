#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int ar[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }
    int b,c,d=0;
    scanf("%d%d",&b,&c);
    for(i=0;i<a;i++)
    {
        if(ar[i]<b||ar[i]>c)
        {
            printf("%d ",ar[i]);
            d++;
        }
    }
    if(d==0)
    {
        printf("-1");
    }
}