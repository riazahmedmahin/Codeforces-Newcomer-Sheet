// by @Mahin
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    char s[1000000];
    gets(s);
 
 
    long long int l,w,i;
    if((s[0]>='a' && s[0]<='z' ) || (s[0]>='A' && s[0]<='Z' )) w=1;
    else w=0;
    l=strlen(s);
     for(i=0;i<l;i++){
        if((s[i]==' ' || s[i]=='?' || s[i]==',' ||s[i]=='.' || s[i]=='!')&& ((s[i+1]>='a' && s[i+1]<='z' ) || (s[i+1]>='A' && s[i+1]<='Z' ))){
            w++;
        }
 
     }
 
     cout<<w;
 
    return 0;
}
