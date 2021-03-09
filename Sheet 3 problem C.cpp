// prepared by @mahin

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
     if(a[i]>0)
    {
        cout<<"1 ";
    }
    else if(a[i]<0)
    {
    cout<<"2 ";
    }
    else if(a[i]==0){
       cout<<"0 "; 
    }
   
    
    }
    
    return 0;
}
