// by @ Mahin


#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>> s;
    char c='h';
    int l= s.size(),flag = 0;
    for(int i=0; i<l; i++)
    {
        if(s[i]==c)
        {
            flag++;
            if(flag == 1)
                c = 'e';
            else if(flag == 2)
                c = 'l';
            else if(flag==3)
                c= 'l';
            else if(flag== 4)
                c = 'o';
            else if(flag == 5)
                break;
        }
    }
 
