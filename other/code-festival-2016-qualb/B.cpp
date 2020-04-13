#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  int N,A,B;
  string S;
  cin >> N >> A >> B  >> S;
  int cnt=0,bcnt=0;
  rep(i,N){
    if(S.at(i)=='a'&&cnt<A+B){
      cout << "Yes" << endl;
      ++cnt;
    }else if(S.at(i)=='b'&&cnt<A+B&&bcnt<B){
      cout << "Yes" << endl;
      ++bcnt; ++cnt;
    }else{
      cout << "No" << endl;
    }
  }
}
