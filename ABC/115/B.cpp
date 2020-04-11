#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  int N;
  cin >> N;
  vector<int> p(N);
  rep(i,N){
    cin >> p.at(i);
  }
  sort(p.begin(),p.end());
  int m = 0;
  rep(i,N){
    if(i==N-1){
      m += p.at(i)/2;
    }else{
      m += p.at(i);
    }
  }
  cout << m <<endl;
}
