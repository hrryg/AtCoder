#include <bits/stdc++.h>
using namespace std;
int main(){
  double N,K,i,j=0,num,mnum=0;
  cin >> N >> K;
  vector<double> p(N);

  for(i=0;i<N;i++){
    int n;
    cin >> n;
    num = (1 + n) * n / 2;
    num = num/n;
    p.at(i)= num;
  }
  for(i=0;i<K;i++)
    mnum += p.at(i);
  num = mnum;

  for(i=K;i<N;i++){
    num = num+p.at(i)-p.at(j);
    mnum = max(mnum,num);
    ++j;
  }
  cout << setprecision(10) << mnum;
}
