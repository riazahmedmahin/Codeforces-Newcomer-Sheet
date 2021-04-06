// by @ Mahin

///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int main ()
{


  int n;
  cin >> n;
  double arr[n], sum = 0;
  for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
      sum += arr[i];
    }
  cout << setprecision (6) << fixed << sum / n << endl;
  return 0;
}
