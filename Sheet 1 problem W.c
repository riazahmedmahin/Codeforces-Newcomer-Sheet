//prepared by@Mahin
#include<stdio.h>
int main(){
   int A,B,C;
   char S, Q;
   scanf("%d %c %d %c %d",&A,&S,&B,&Q,&C);
   switch(S){
   case '+' : if(C == A + B ){
                 printf("Yes\n");}
              else
                 {printf("%d\n",A + B);}
              break;

   case '-' : if(C == A - B ){
                 printf("Yes\n");}
              else
                 {printf("%d\n",A - B);}
              break;

   case '*' : if(C == A * B ){
                 printf("Yes\n");}
              else
                 {printf("%d\n",A * B);}
              break;
   }
return 0;
}
