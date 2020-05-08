#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  int x,y;
  vector<int> n(3);
  rep(i,3){
    cin >> n.at(i);
  }
  sort(n.begin(),n.end());

  x = n.at(2) - n.at(1);
  y = n.at(2) - n.at(0) - x;

  if(y%2){
    ++x; ++y;
  }
  cout << x+y/2 << endl;
}
