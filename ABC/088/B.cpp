#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  int N;
  cin >> N;
  vector<int> a(N);
  rep(i,N){
    cin >> a.at(i);
  }
  sort(a.begin(),a.end());
  reverse(a.begin(),a.end());
  int A=0,B=0;
  rep(i,N){
    if(i%2){
      B += a.at(i);
    }else{
      A += a.at(i);
    }
  }
  cout << A - B << endl;
}
