// prepared by @ Mahin 

 #include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a[1000],b[1000],i,j,d=0,same=0;
    cin>>n;
    //taking input array a and b
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        //checking how many inputs are same
            for(int k=0;k<i;k++){
                if(a[k]==a[i])
                    same++;
            }
    }
     for(i=0;i<n;i++){
        cin>>b[i];
    }

    //matching a elements to b

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]==b[j])
                d++;

        }

    }
    //same input er jonno d er extra value gula baad diye
    d=d-same*2;
    
    //output condition
    if(d==n)
        cout<<"yes";
    else
        cout<<"no";

    return 0;
}
