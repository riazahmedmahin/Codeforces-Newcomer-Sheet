// by @ Mahin

#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000010];
    scanf(" %s",s);
    printf("%s",strrev(s));
    while(scanf("%s",s)!=EOF)
        printf(" %s",strrev(s));
    return 0;
}
