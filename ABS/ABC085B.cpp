#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,i;
  int mochi =0;
  cin >> N;
  vector<int> v(N);

  for(i=0;i<N;i++)
  cin >> v.at(i);
  sort(v.begin(),v.end());
  reverse(v.begin(),v.end());

  int x = 0;
  for(i=0;i<N;i++){
    if(x==0){
      x = v.at(i);
      mochi++;
    }else if(x > v.at(i)){
      x = v.at(i);
      mochi++;
    }
  }
  cout << mochi << endl;
}
