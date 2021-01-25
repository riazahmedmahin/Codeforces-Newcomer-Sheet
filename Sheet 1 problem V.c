//prepared by @ Mahin
#include<stdio.h>
 
int main()
{
    int num1, num2;
    char ch;
    scanf("%d %c %d", &num1, &ch,  &num2);
 
    if(ch == '<')
    {
 
        if(num1 < num2)
           printf("Right\n");
        else
            printf("Wrong\n");
    }
    else  if(ch == '>')// num1<=num2
    {
 
        if(num1 > num2)
            printf("Right\n");
        else
             printf("Wrong\n");
    }
    else
    {
        if (num1 == num2)
            printf("Right\n");
        else
            printf("Wrong\n");
    }
    return 0;
}
