#include<stdio.h>
int main()
{
    int a,sum=0,i;
    scanf("%d",&a);
    int ar[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
        sum+=ar[i];
    }
    int avg=sum/a,c=0;
    for(i=0;i<a;i++)
    {
        if(ar[i]<=avg)
        {
            c++;
        }
    }
    printf("%d",c);
}