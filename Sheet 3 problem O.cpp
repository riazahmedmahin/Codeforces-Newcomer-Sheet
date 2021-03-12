// prepared by @ Mahin 

 #include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i;

    cin>>n;

    long long int a[100];
    a[1]=0;
    a[2]=1;

    for(i=3;i<=n;i++){
        a[i]=a[i-2]+a[i-1];
    }
    cout<<a[n];


    return 0;
}
