#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  int N;
  cin >> N;
  set<string> S;
  rep(i,N){
    string t;
    cin >> t;
    if(!S.count(t)){
      S.insert(t);
    }
  }
  cout << S.size() << endl;
}
