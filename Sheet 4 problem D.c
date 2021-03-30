// by @ mahin

#include<stdio.h>
#include<stdio.h>

int main(){
    char s[1000],t[1000];
    scanf("%s %s",s,t);
    char x=s[0],y=t[0];
    int i,sl,tl;

    sl=strlen(s);
    tl=strlen(t);

    strcat(s,t);
    printf("%d %d\n",sl,tl);
    printf("%s\n",s);
    for(i=0;i<sl;i++){
        s[0]=y;
        printf("%c",s[i]);
    }
    printf(" ");
    for(i=0;i<tl;i++){
        t[0]=x;
        printf("%c",t[i]);
    }

    return 0;
}
