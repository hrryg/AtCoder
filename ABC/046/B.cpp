#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
  ll N,K;
  cin >> N >> K;
  cout << K*(int)pow(K-1,N-1) << endl;
}
