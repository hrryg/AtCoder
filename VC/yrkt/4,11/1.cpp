#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  int N,M;
  cin >> N >> M;
  vector<int> L(M);
  vector<int> R(M);
  rep(i,M)
    cin >> L.at(i) >> R.at(i);
  sort(L.begin(),L.end());
  sort(R.begin(),R.end());
  if(L.at(M-1)>R.at(0))
    cout << "0" << endl;
  else
    cout << R.at(0)-L.at(M-1)+1 << endl;

}
