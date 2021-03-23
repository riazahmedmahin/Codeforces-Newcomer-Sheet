
// by @ Mahin 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    
    sort(s.begin(),s.end());
    int l=s.size();
    char c=s[0];
    int count=1;
    
    for(int i=1;i<=l;i++){
        
        
        if(s[i]==c)count++;
        else {
            cout << c << " : " << count << endl;
            c=s[i];
            count = 1;
        }
      
    }
    return 0;
}
