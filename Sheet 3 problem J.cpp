// by @ Mahin #include<stdio.h>

int main(){
    int n,i,lowest,f=0;

    scanf("%d",&n);
    int a[n];

    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    //finding the lowest element of the array
    lowest=a[1];
    for(i=2;i<=n;i++){
        if(a[i]<lowest)
            lowest=a[i];
    }
    //finding the lowest element's frequency
    for(i=1;i<=n;i++){
        if(a[i]==lowest)
            f++;
    }
    //checking the array is lucky or not
    if(f%2!=0)
        printf("Lucky");
    else
         printf("Unlucky");

    return 0;
}
