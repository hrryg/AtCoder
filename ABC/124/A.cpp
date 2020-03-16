#include <bits/stdc++.h>
using namespace std;

int main(){
  int A,B;
  cin >> A >> B;
  if(A-1>B)
    cout << A*2-1;
  else if(B-1>A)
    cout << B*2-1;
  else
    cout << A+B;
}
