#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  int N,p=0;
  bool b = 1;
  cin >> N;
  vector<int> s(N);
  rep(i,N){
    cin >> s.at(i);
    p += s.at(i);
  }
  sort(s.begin(),s.end());
  if(p%10){
    cout << p << endl;
    b = 0;
  }else{
    rep(i,N){
      if((p-s.at(i))%10){
        cout << p - s.at(i) <<endl;
        b = 0;
        break;
      }
    }
  }
  if(b){
    cout << "0" << endl;
  }
}
