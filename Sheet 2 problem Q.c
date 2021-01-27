//prepared by @ Mahin

#include<stdio.h>
int main()
{
    int n,m,i,num;
    char N[100];
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%s",&N);
        n = atoi(N);
    if(n/1==0){
        printf("%s",N);
        printf("\n");
    }else{
        while(n!=0){
        m=n%10;
        n=n/10;
        printf("%d ",m);
    }
    printf("\n");
    }
    }

    return 0;
}
