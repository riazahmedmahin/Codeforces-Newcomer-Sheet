// prepared by @Mahin 

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string num;
    cin >> num;
    int sum=0;

    for(int i=0;i<num.size();i++)
    {
        sum=sum+(num[i]-'0');
    }
    cout << sum;
}
