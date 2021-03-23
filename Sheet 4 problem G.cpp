// by @ Mahin 

#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[100000];
    gets(s);
    int i,l;
    l=strlen(s);
    for(i=0;i<l;i++){
        int x= s[i];
        if(x >=97 && x<=122){
            s[i]=s[i]-32;
            cout<<s[i];
        }

        if(x >=65 && x<=90){
            s[i]=s[i]+32;
            cout<<s[i];
        }

        if(x==','){
            cout<<" ";
        }
    }


    return 0;
}
