#include<stdio.h>
int main()
{
    int n,i,x,y,d=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&x,&y);
    for(i=0;i<n;i++)
    {
        if(x<=a[i]&&a[i]<=y)
        int s=0;
        else
        {
            d=d+a[i];
        }
    }
    printf("%d",d);
}