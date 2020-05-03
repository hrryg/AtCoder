#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long int ll;

int main(){
  int N,K;
  cin >> N >> K;
  set<int> s;
  rep(i,K){
    int d;
    cin >> d;
    rep(j,d){
      int A;
      cin >> A;
      if(!(s.count(A))){
        s.insert(A);
      }
    }
  }
  cout << N - s.size() << endl;
}
