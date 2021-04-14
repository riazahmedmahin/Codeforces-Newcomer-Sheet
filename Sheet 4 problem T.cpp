// by @Mahin

#include<bits/stdc++.h>
using namespace std;

    int main()
    {
  
        int i,j;
        string s;

        cin >> s;

        int ln = s.size();
        i= 0;
        while(s[i] != '?') 
        i++;
        
        i++;

        string sub;
        sub = s.substr(i,ln);

        for(int i = 0; i < sub.size(); i++){
            if(sub[i] != '&' && sub[i] != '=') cout << sub[i];
            else if(sub[i] == '=') cout << ": ";
            else cout << endl;

        }

       
        return 0;
    }
