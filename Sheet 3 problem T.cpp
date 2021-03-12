// prepared by @mahin

#include<stdio.h>

int main(){
    int n,i,j,p_sum=0,s_sum=0,diff;
    scanf("%d",&n);

    int a[100][100],k=n-1;
    //taking array input

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    //calculating the primary diagonal's sum when the i==j
    for(i=0;i<n;i++){
        j=i;
        p_sum=p_sum + a[i][j];
    }
    //calculating the secondary diagonal's sum when the i==j
    for(i=0;i<n;i++){
        s_sum=s_sum + a[i][k--];
    }

    //absolute difference
    diff=p_sum - s_sum;
    if(diff<0)
        printf("%d",diff*-1);
    else
        printf("%d",diff);

    return 0;
}
