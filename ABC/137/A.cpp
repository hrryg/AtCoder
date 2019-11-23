#include <bits/stdc++.h>
using namespace std;

int main(){
  int A,B,sum=0;
  cin >> A >> B;

  sum = max(A+B,A-B);
  sum = max(sum,A*B);

  cout << sum << endl;
}
