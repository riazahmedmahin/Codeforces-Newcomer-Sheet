// prepared by @ Mahin

#include<iostream> 
#include<math.h>
using namespace std; 
 
int main() {
	

  int a,b,c,d;
  cin >> a>> b>> c>> d;
  a=a%100;
  b=b%100;
  c=c%100;
  d=d%100;
  
  int m=(a*b*c*d);
  char lastDigit[2];
  
    lastDigit[1]=(m%10) + '0';
    lastDigit[0]=((m/10)%10) + '0';
    cout <<lastDigit[0]<<lastDigit[1];

  return 0;
}
