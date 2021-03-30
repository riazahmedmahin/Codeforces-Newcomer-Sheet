// bt @Mahin

#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,i;
    cin>>n;//test case number

    for(int j=0;j<n;j++){
        char s1[1000],s2[1000];
        cin>>s1>>s2;//taking 2 string
        int l1,l2,x,y;
        l1=strlen(s1);
        l2=strlen(s2);
        
        //find which string is long or both are equal and put the short string's length in x and long string's length in y
        if(l1<l2){
            x=l1;
            y=l2;
        }else{
            x=l2;
            y=l1;
        }
        if(l1==l2)
            x=l1;
        //printing the output according to the given condition 
        for(i=0;i<x;i++){
            cout<<s1[i]<<s2[i];//printing the letter till short string length
        }
        if(l1!=l2){
                if(l2<l1){
                     for(i=x;i<y;i++){
                        cout<<s1[i];//printing the rest letter of long string
            }
        }
                else{
                    for(i=x;i<y;i++){
                        cout<<s2[i];//printing the rest letter of long string
            }
                }



        }
        cout<<"\n";
    }

    return 0;
}
