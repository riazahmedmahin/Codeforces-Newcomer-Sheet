// by @ Mahin 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int l=s.size();
    int noL = 0;
    int noR = 0;
    int flag=0;
    for(int i =0; i<l; i++)
    {

        if(s[i] == 'L')
            noL++;
        else if(s[i] == 'R')
            noR++;
        if(noL==noR)
            flag++;
    }
    cout << flag<<endl;
    for(int i =0; i<l; i++)
    {

        if(s[i] == 'L')
        {
            noL++;
            cout <<s[i];
        }
        else if(s[i] == 'R')
        {
            noR++;
            cout << s[i];
        }
        if(noL==noR)
        {
            flag++;
            cout << endl;
        }
    }
}
