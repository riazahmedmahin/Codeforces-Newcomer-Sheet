//prepared by @Mahin
#include <stdio.h>
int main()
{
    int n, first;
    scanf("%d", &n);
    first = n;
    while(first >= 10)
    {
        first = first / 10;
    }
    if(first%2==0){
       printf("EVEN");
    }
    else
    {
        printf("ODD");
    }

    return 0;
}
