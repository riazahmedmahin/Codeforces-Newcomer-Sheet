// Prepared by @Mahin

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],i,min;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        min=a[0];
    }
    
    for(int i=0;i<n;i++)
    {
        if(min>a[i]){
            min=a[i];
        }
    }
    for(int i =0;i< n;i++){
    if(a[i] == min){
    cout << min << " " << i+1;
    break;
  }
}
    return 0;
}
