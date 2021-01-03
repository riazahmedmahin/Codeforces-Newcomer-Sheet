//prepared by @Mahin
#include<stdio.h>
        int main()
        {
            int a,b,x,y,m,n;
            scanf("%d %d %d  %d",&a,&b,&x,&y);
            if(x<a){
                m=a;
                n=y;
            }
            if(x>=a){
                m=x;
                n=b;
            }
            if((a==b && b==x && x==y)){
                m=a;
                n=x;
            }
            if(a<x && y<b){
                m=x;
                n=y;
            }
            if(a>x && y>b){
                m=a;
                n=b;
            }
            if(a==x && b==y){
                m=a;
                n=b;
            }
            if(a==b&&b==x){
                m=a;
                n=a;
            }
            if(a==x && y<b){
                m=a;
                n=y;
            }
            if(y<a || b<x){
                printf("%d",-1);
            }else
                printf("%d %d",m,n);
            return 0;
        }
