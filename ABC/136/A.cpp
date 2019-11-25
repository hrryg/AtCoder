#include <bits/stdc++.h>
using namespace std;

int main(){
  int A,B,C,sum;
  cin >> A >> B >> C;

  sum = C - (A - B);
  if(sum <= 0)
  cout << "0" << endl;
  else
  cout << sum << endl;
}
