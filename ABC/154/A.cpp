#include <bits/stdc++.h>
using namespace std;

int main(){
  string S,T,U;
  int A,B;
  cin >> S >> T >> A >> B >> U;

  if(U==S)
  A--;
  else if(U==T)
  B--;

  cout << A << " " << B;
}
