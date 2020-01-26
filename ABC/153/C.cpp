#include <bits/stdc++.h>
using namespace std;

int main(){
  long N,K,i,sum=0;
  cin >> N >> K;
  vector<long> H(N);

  for(i=0;i<N;i++)
  cin >> H.at(i);

  sort(H.begin(),H.end());
  reverse(H.begin(),H.end());

  if(N<=K){
    cout << "0";
  }else{
    for(i=0;i<K;i++){
      H.at(i) = 0;
    }
    for(i=0;i<N;i++){
      sum += H.at(i);
    }
    cout << sum;
  }
}
