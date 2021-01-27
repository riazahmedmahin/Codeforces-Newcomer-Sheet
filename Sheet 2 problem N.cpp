// prepared by @ Mahin

#include<iostream>
using namespace std;
int main()
{
    int n,x,i,j;
     char symble;
     cin>>symble;
     cin>>n;
     for(i=0;i<n;i++)
     {
         cin>>x;
         for(j=0;j<x;j++)
            cout<<symble;
         cout<<endl;
     }
}
