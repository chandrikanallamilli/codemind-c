#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int ar[a],s=0;
    for(i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<a;i++)
    {
        if(ar[i]%2==0)
        {
            s=i;
        }
    }
    printf("%d",s);
}