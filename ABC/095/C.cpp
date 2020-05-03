#include <bits/stdc++.h>
using namespace std;

int main(){
  int A,B,AB,X,Y;
  cin >> A >> B >> AB >> X >> Y;
  int dif = abs(X-Y);
  int C,D,E;
  if(X>Y){
    C = A;
    D = Y;
    E = X;
  }else{
    C = B;
    D = X;
    E = Y;
  }
  cout << min(A*X+B*Y,min(AB*D*2+dif*C,AB*E*2)) << endl;
}
