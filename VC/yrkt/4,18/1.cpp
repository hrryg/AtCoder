#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long int ll;

int main(){
  int N;
  cin >> N;
  vector<int> L(N);
  rep(i,N){
    cin >> L.at(i);
  }
  sort(L.begin(),L.end());
  int sum = 0;
  rep(i,N-1){
    sum += L.at(i);
  }
  if(L.at(N-1)<sum){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
