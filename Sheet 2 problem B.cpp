// prepared by @ mahin 
#include<iostream>
using namespace  std;

int main()
{
int n,i,count=0;
cin>>n;
for(i=1;i<=n;i++){
if(i%2==0){
cout<<i<<endl;
count++;
}
}
if(count++==0)
cout<<"-1";

return 0;
}
