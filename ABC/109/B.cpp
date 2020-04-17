#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  int N;
  bool b = 1;
  cin >> N;
  set<string> s;
  rep(i,N){
    string W;
    char c;
    cin >> W;
    if(i==0){
      s.insert(W);
      c = W.at(W.size()-1);
    }else{
      if(s.count(W)||c!=W.at(0)){
        cout << "No" << endl;
        b = 0; break;
      }else{
        s.insert(W);
        c = W.at(W.size()-1);
      }
    }
  }
  if(b){
    cout << "Yes" << endl;
  }
}
