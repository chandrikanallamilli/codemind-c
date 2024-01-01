#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[100];
    int uppercaseCount=0;
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!=NULL;i++) {
        if(isupper(str[i])) {
            uppercaseCount++;
        }
    }
    printf("%d
",uppercaseCount);
    return 0;
}