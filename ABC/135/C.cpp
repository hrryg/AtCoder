#include <bits/stdc++.h>
using namespace std;

int main(){
  long N,i,m=0;
  cin >> N;
  vector<long> tHero(N);
  vector<long> tEnemy(N+1);
  for(i=0;i<N+1;++i)
    cin >> tEnemy.at(i);
  for(i=0;i<N;++i)
    cin >> tHero.at(i);
  for(i=0;i<N;++i){
    if(tEnemy.at(i)>=tHero.at(i))
      m += tHero.at(i);
    else{
      m += tEnemy.at(i);
      tHero.at(i) -= tEnemy.at(i);
      if(tEnemy.at(i+1)>=tHero.at(i)){
        m += tHero.at(i);
        tEnemy.at(i+1) -= tHero.at(i);
      }else{
        m += tEnemy.at(i+1);
        tEnemy.at(i+1) = 0;
      }
    }
  }
  cout << m;
}
