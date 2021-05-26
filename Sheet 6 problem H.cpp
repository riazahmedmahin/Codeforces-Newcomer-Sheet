// by @ Mahin

#include <bits/stdc++.h>
using namespace std;
int
main ()
{

   long long int a, b;
  cin >> a >> b;
  long long int gcd = __gcd (a, b);
   long long int lcm = (a / gcd) * b;
  cout << gcd << " " << lcm << endl;
}
