// @ Mahin

#include<bits/stdc++.h>
using namespace std;
int main ()
{

  int n;
  cin >> n;
  int arr[n], arr2[n], i;
  for (i = 0; i < n; i++)
    cin >> arr[i];
  for (i = 0; i < n; i++)
    cin >> arr2[i];
  for (i = 0; i < n; i++)
    cout << arr2[i] << " ";
  for (i = 0; i < n; i++)
    cout << arr[i] << " ";
}
