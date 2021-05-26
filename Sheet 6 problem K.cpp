// by  @ Mahin

#include<bits/stdc++.h>
using namespace std;
long long int
fact (long long  int n)
{
  if (n <= 1)
    return 1;
  return n * fact (n - 1);
}

long long int
nCr (long long int n, long long int r)
{
  return fact (n) / (fact (r) * fact (n - r));
}

long long  int
nPr (long long int n, long long int r)
{
  return fact (n) / fact (n - r);
}

int
main ()
{


  long int n, r;
  cin >> n >> r;
  cout << nCr (n, r);
  cout << " ";
  cout << nPr (n, r);

  return 0;

}
