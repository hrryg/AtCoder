#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,M,i,p,ACcnt=0,WAcnt=0;
  string S;
  cin >> N >> M;
  map<int,pair<string,int>> AtCoder;

  for(i=0;i<M;i++){
    cin >> p >> S;
    if(AtCoder.count(p)){
      if(AtCoder.at(p).first=="WA"){
        if(S=="AC"){
          ACcnt++;
          AtCoder[p].first = "AC";
          WAcnt += AtCoder[p].second;
        }else
        AtCoder[p].second++;
      }
    }else{
      if(S=="WA"){
        AtCoder[p].first = "WA";
        AtCoder[p].second = 1;
      }else {
        ACcnt++;
        AtCoder[p].first = "AC";
      }
    }
  }
  cout << ACcnt << " " << WAcnt << endl;
}
