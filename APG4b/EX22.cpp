#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<pair<int,int>> nPair(N);
  for(int i = 0; i < N; i++){
    int a,b;
    cin >> a >> b;
    nPair.at(i) = make_pair(b,a);
  }

  sort(nPair.begin(),nPair.end());

  for(int i = 0; i < N; i++){
    int b,a;
    tie(b,a) = nPair.at(i);
    cout << a << " " << b << endl;
  }
}
