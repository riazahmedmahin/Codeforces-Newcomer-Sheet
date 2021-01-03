//prepared by @Mahin
#include<stdio.h>
int main()
{
    int a,b,c,temp,i,j,k;
    scanf("%d %d %d",&a,&b,&c);
    i=a;
    j=b;
    k=c;
    if(a>b){temp=a;a=b;b=temp;}
    if(a>c){temp=a;a=c;c=temp;}
    if(b>c){temp=b;b=c;c=temp;}
    printf("%d\n%d\n%d\n",a,b,c);
    printf("\n");
    printf("%d\n%d\n%d\n",i,j,k);
    return 0;



}
