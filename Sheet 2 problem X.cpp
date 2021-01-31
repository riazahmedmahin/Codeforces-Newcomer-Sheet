// prepared by @ Mahin

#include<bits/stdc++.h> 
 
using namespace std; 
 
int main() {
  // freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
  int t;
  cin >> t;

  while(t--){
    int n,count=0;
    cin >>n;

    while(n!=0){
      int r=n%2;
      if(r==1) count++;
      n=n/2;
    }
    int m=1,d=0;
    for(int i=1;i<=count;i++){
      d=d+m;
      m=m*2;
    }
    cout << d << endl;

  }
 
  return 0;
}
