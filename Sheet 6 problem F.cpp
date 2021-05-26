// by @Mahin

//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;


int main ()
{


  int r1, c1, r2, c2, i, j, k;
  cin >> r1 >> c1;
  int a[r1][c1];
  for (i = 0; i < r1; ++i)
    for (j = 0; j < c1; ++j)
      cin >> a[i][j];


  cin >> r2 >> c2;
  int b[r2][c2], mult[r1][c2];
  for (i = 0; i < r2; ++i)
    for (j = 0; j < c2; ++j)
      cin >> b[i][j];


  for (i = 0; i < r1; ++i)
    for (j = 0; j < c2; ++j)
      mult[i][j] = 0;


  for (i = 0; i < r1; ++i)
    for (j = 0; j < c2; ++j)
      for (k = 0; k < c1; ++k)
	mult[i][j] += a[i][k] * b[k][j];


  for (i = 0; i < r1; ++i)
    for (j = 0; j < c2; ++j)
      {
	cout << mult[i][j] << " ";
	if (j == c2 - 1)
	  cout << endl;
      }

  return 0;

}
