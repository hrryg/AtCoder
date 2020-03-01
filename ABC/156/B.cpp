#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,K,dig=1;
  cin >> N >> K;

  while(N>=K){
    N = N/K;
    dig++;
  }
  cout << dig;
}
