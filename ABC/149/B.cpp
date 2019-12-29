#include <bits/stdc++.h>
using namespace std;

int main(){
  long long A,B,K,i;
  cin >> A >> B >> K;

  if(A>=K)
  A -= K;
  else if(A<K){
    K -= A;
    A = 0;
    if(B<K)
    B = 0;
    else
    B -= K;
  }
  cout << A << " " << B << endl;
}
