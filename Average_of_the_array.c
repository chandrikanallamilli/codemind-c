#include<stdio.h>
int main()
{
    int a,sum=0,avg,i;
    scanf("%d",&a);
    int ar[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
        sum+=ar[i];
    }
    printf("%.2f",(float)sum/a);
}