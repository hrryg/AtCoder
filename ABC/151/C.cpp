#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,M,i,ACcnt=0,WAcnt=0;
  cin >> N >> M;
  map<int,string> AtCoder;

  for(i=0;i<M;i++){
    int p;
    string S;
    cin >> p >> S;
    if(AtCoder.count(p)){
      if(AtCoder.at(p)=="WA"){
        if(S=="AC"){
          ACcnt++;
          AtCoder[p] = "AC";
        }else if(S=="WA")
        WAcnt++;
      }
    }else{
      if(S=="WA"){
        WAcnt++;
        AtCoder[p] = "WA";
      }else if(S=="AC"){
        ACcnt++;
        AtCoder[p] = "AC";
      }
    }
  }
  cout << ACcnt << " " << WAcnt << endl;
}
