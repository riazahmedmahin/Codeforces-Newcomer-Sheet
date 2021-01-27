// prepared by @Mahin

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){

        int x,y,sum=0;
        cin>>x>>y;
        if(x < y){
            for(int i = x+1 ; i < y ; i++){
                if(i % 2 != 0){
                    sum += i;
                }
            }cout<<sum<<endl;
        }else if(x > y){
        for(int i = y+1 ; i < x ; i++){
            if(i % 2 != 0){
                sum += i;

            }
        }cout<<sum<<endl;
        }else if(x == y){
        cout<<"0"<<endl;
        }
    }
return 0 ;
}
