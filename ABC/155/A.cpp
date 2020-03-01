#include <bits/stdc++.h>
using namespace std;

int main(){
  int A,B,C;
  cin >> A>> B >>C;
  if(A==B&&B==C&&C==A)
  cout << "No";
  else if(A!=B&&B!=C&&C!=A)
  cout << "No";
  else
  cout << "Yes";
}
