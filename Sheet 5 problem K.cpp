// @Mahin

#include <bits/stdc++.h>
using namespace std;

void ShiftR(int a[], int n, int x)
{
    while(x--)
    {
        int temp=a[n-1];
        for(int i=n-1; i>0; i--)
        {
            a[i]=a[i-1];
        }
        a[0]=temp;
    }
    for(int i=0; i<n; i++)
    {
        cout << a[i]<< " ";
    }

}
int main()
{
    int n,x;
    cin >> n >> x;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    ShiftR(a,n,x);
}
