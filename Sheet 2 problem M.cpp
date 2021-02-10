// prepared by @Mahin

#include<bits/stdc++> 
 
using namespace std; 
 
int main() {

  int a,b;
  cin >> a >> b;
 
  vector<int> luckyNumber;
 
  for(int i=a; i <=b;i++){
    int temp=i;
    
    while(temp!=0){
     
      int m=temp%10;
      if(m==4 || m==7){
       
        temp = temp/10;    
      } 
      else{
        
        break;
      } 
      
    }
   
    if(temp==0) luckyNumber.push_back(i);
 
  }
  if(luckyNumber.size()==0) cout << "-1";
  else 
  {
    for(auto x:luckyNumber){
      cout << x << " ";
    }
  }
 
 
 
  return 0;
}
