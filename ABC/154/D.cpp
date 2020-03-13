#include <bits/stdc++.h>
using namespace std;

int main(){
  double N,K,i,j,num,mnum;
  cin >> N >> K;
  vector<pair<double,double>> p(N);

  for(i=0;i<N;i++)
  cin >> p.at(i).first;
  for(i=0;i<N;i++){
    num = (1 + p.at(i).first) * p.at(i).first / 2;
    num = num/p.at(i).first;
    p.at(i).second = num;
  }
  for(i=0;i<K;i++)
  mnum += p.at(i).second;
  for(i=1;i<N-K+1;i++){
    num = 0;
    for(j=i;j<i+K;j++){
      num += p.at(j).second;
    }
    mnum = max(mnum,num);
  }
  cout << mnum;

}
