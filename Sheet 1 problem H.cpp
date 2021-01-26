// prepaid by @ Mahin

#include<iostream>
#include<math.h>
using namespace std;

int main(){
  int f, c, r, A,B;
  double X;
  cin>>A>>B;
  X = (double)A / (double)B;
  f = floor(X);
  c = ceil(X);
  r = round(X);
  cout<<"floor "<<A<<" / "<<B<<" = "<<f<<endl;
  cout<<"ceil "<<A<<" / "<<B<<" = "<<c<<endl;
  cout<<"round "<<A<<" / "<<B<<" = "<<r<<endl;
  
}
