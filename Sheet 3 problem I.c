// Prepared by @Mahin
#include<stdio.h>

int main(){
    int t,n,i,j;
    long long int sum,low;

    scanf("%d",&t);
    for(int x=0;x<t;x++){
        scanf("%d",&n);
        long long int a[n];
        for(i=1;i<=n;i++){
            scanf("%lld",&a[i]);
        }
        for(i=1;i<n;i++){
            for(j=i+1;j<=n;j++){
                sum=a[i]+a[j]+j-i;
                if(j==2){
                    low=sum;
                }
                if(sum<low){
                    low=sum;
                }
            }
        }
        printf("%lld\n",low);
    }
    return 0;
}
