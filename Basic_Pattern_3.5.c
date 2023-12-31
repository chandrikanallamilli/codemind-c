#include<stdio.h>
int main()
{
    int i,j,n,nu;
    scanf("%d",&n);
    nu=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=nu;j++)
        {
            printf("%c ",j+64);
        }
        nu--;
        printf("
");
    }
}