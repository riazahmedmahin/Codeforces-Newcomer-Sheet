// prepared by @Mahin 

 #include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> num(n);

    for(int i=0;i<n;i++){
        cin >> num[i];
    }

    int flag=0,op=0;
    while(flag==0){
            int coun=0;
        for(int i=0;i<n;i++){
            if(num[i]%2==0){
                coun++;
                num[i]=num[i]/2;
            }else
                flag=1;
        }
        if(coun==n)op++;
    }
    cout << op;
}
