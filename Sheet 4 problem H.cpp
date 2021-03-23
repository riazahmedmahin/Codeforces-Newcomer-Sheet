// by @ Mahin 

 #include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin>>n;

    for(int j=0;j<n;j++){
        
        char s[100000],x[4],c1[4]="010",c2[4]="101"; 
        /*x is a new string to store s string's 3 
                    element to compare with c1 and c2 where c1 and c2 are condition string*/
        
        cin>>s;//taking the string to find its good or bad
        

        int i,l,d1,d2,b=0;
        l=strlen(s);//l is length of string s

        for(i=0;i<l-2;i++){
            //soring s elements 3 by 3 in string x
            x[0]=s[i];
            x[1]=s[i+1];
            x[2]=s[i+2];
            x[3]='\0'; //putting null character in the last position otherwise it will not work.and to find out this thing i spend almost 3 hours 
    
            //comparing x with c1 and c2
            d1=strcmp(x,c1);
            d2=strcmp(x,c2);
            
            if(d1==0 || d2==0){
                b++;
                cout<<"Good\n";
                break;
            }
        }
        if(b==0)
            cout<<"Bad\n";

        }

    return 0;
}
