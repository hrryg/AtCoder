#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,X,Y,Z,i;
  int cnt = 0;
  cin >> N >> X >> Y >> Z;
  vector<pair<int,int>> v(N);

  for(i=0;i<N;i++)
  cin >> v.at(i).first >> v.at(i).second;

  for(i=0;i<N;i++){
    if(v.at(i).first >= X && v.at(i).second >= Y){
      if(v.at(i).first + v.at(i).second >= Z)
      cnt++;
    }
  }
  cout << cnt << endl;
}
