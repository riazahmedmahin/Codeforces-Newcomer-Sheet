// prepared by @ Mahin 
 #include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,x,i,j,d=0;
    //taking n & m respectively the value of row and column
    cin>>n>>m;
    int a[n][m];

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    //taking input the number which need to match
    cin>>x;

    //matching x with array elements

     for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i][j]==x){
                d++;
            }
        }
    }
             if(d!=0){
                cout<<"will not take number";

            }else{
                cout<<"will take number";
            }
    return 0;
}
