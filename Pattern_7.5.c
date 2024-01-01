#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int k=i;k>=1;k--)
        {
            printf("%c ",65+n-i);
        }
        printf("
");
    }
}