#include <bits/stdc++.h>
using namespace std;

int main(){
  int D,i;
  long money = 0;
  long pc = -1;
  cin >> D;
  vector<pair<long,long>> v(D);

  for(i=0;i<D;i++)
  cin >> v.at(i).first;
  for(i=0;i<D;i++)
  cin >> v.at(i).second;

  for(i=0;i<D;i++){
    money += v.at(i).first;
    if(money >= v.at(i).second){
      if(pc == -1)
      pc = v.at(i).second;
      else{
        pc = min(pc,v.at(i).second);
      }
    }
  }
  cout << pc << endl;
}
