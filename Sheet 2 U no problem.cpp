// Prepared by @ Mahin
#include<bits/stdc++.h> 

using namespace std; 
 
int main() {
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);

  int n,a,b,sum=0;
  cin >> n >> a >> b;

  for( int i=1;i<=n;i++){
    int  temp=i,s=0;
    while(temp!=0){
      int m=temp%10;
      s=s+m;
      temp=temp/10;
    }
    if(s>=a && s<=b){
      sum=sum+i;
    }
  }

  cout << sum;

  return 0;
}
