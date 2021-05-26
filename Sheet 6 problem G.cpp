// by @Mahin

#include<bits/stdc++.h>
using namespace std; 
int main() 
{ 

long long int n1,sum=0;
cin>>n1;
for(long long int i=1;i<=sqrt(n1);i++)
{
    if(i*i==n1)sum=sum+i;
    else if(n1%i==0)
    {
        sum=sum+i;
        sum=sum+(n1/i);
    }
}
cout<<sum<<endl;

return 0;

}
