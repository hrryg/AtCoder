#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,M,i,ACcnt=0,WAcnt=0;
  cin >> N >> M;
  map<int,pair<string,int>> AtCoder;

  for(i=0;i<M;i++){
    int p;
    string S;
    cin >> p >> S;
    if(AtCoder.count(p)){
      if(AtCoder.at(p).first=="WA"){
        if(S=="AC"){
          ACcnt++;
          AtCoder[p].first = "AC";
          WAcnt += AtCoder[p].second;
        }else if(S=="WA")
        AtCoder[p].second++;
      }
    }else{
      if(S=="WA"){
        AtCoder[p].first = "WA";
        AtCoder[p].second = 1;
      }else if(S=="AC"){
        ACcnt++;
        AtCoder[p].first = "AC";
      }
    }
  }
  cout << ACcnt << " " << WAcnt << endl;
}
