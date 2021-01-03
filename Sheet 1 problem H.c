//prepared by @Mahin

#include<stdio.h>
#include<math.h>
int main(){
  int f, c, r, A,B;
  double X;
  scanf("%d %d",&A,&B);
  X = (double)A / (double)B;
  f = floor(X);
  c = ceil(X);
  r = round(X);
  printf("floor %d / %d = %d\n",A,B,f);
  printf("ceil %d / %d = %d\n",A,B,c);
  printf("round %d / %d = %d\n",A,B,r);
}
