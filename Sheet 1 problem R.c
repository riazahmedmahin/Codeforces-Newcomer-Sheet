//prepared by @Mahin
#include <stdio.h>
int main() {
    int N,y=0,m=0,d=0;
    scanf("%d",&N);
    y=N/365;
    N=N%365;
    m=N/30;
    d=N%30;
    printf("%d years\n",y);
    printf("%d months\n",m);
    printf("%d days\n",d);
    
  
    return 0;
}
