#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,i;
  long sum=0;
  string a;
  cin >> N;
  vector<string> s(N);
  map<string,int> m;

  for(i=0;i<N;i++){
    cin >> a;
    sort(a.begin(),a.end());
    s.at(i) = a;
  }
  for(i=0;i<N;i++){
    if(m.count(s.at(i))){
      sum += m.at(s.at(i));
      m.at(s.at(i))++;
    }else
    m[s.at(i)] = 1;
  }
  cout << sum << endl;
}
