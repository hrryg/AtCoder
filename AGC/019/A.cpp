#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
  ll Q,H,S,D,N;
  cin >> Q >> H >> S >> D >> N;
  Q *= 4;
  H *= 2;
  ll t = min(Q,min(H,S));
  if(N==1){
    cout << t*N << endl;
  }else{
    if(N%2){
      cout << min(t*N,D*(N/2)+t) << endl;
    }else{
      cout << min(t*N,D*N/2) << endl;
    }
  }
}
