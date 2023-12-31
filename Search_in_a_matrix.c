#include<stdio.h>
int main()
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    int arr[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int d,f=0;
    scanf("%d",&d);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(arr[i][j]==d)
            {
                f=1;
                break;
            }
        }
    }
    if(f==1)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}