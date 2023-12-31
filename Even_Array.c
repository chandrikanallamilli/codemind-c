#include<stdio.h>
int main()
{
    int a,s=0,f=0,i;
    scanf("%d",&a);
    int ar[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i]%2==0)
        {
            f++;
        }
    }
    if(f==a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}