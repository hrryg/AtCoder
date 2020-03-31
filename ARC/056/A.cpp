#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
  ll A,B,K,L;
  cin >> A >> B >> K >> L;
  ll t = K/L;
  ll m = K%L;
  cout << min(t*B + m*A,(t+1)*B) << endl;
}
