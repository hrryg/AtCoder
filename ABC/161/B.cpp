#include <bits/stdc++.h>
using namespace std;

int main(){
  double N,M,sum=0;
  cin >> N >> M;
  vector<double> A(N);
  for(int i=0;i<N;++i){
    cin >> A.at(i);
    sum += A.at(i);
  }
  double t = sum / (4*M);
  cout << t << endl;
  sort(A.begin(),A.end());
  reverse(A.begin(),A.end());

  bool b = 1;
  for(int i=0;i<M;++i){
    if(A.at(i)<t){
      b = 0;
    }
  }
  if(b){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
