#include <bits/stdc++.h>
using namespace std;

int main(){
  int L,n,i;
  cin >> L >> n;
  vector<int> x(n);
  for(i=0;i<n;++i)
    cin >> x.at(i);

  int minT = 0;
  for(i=0;i<n;++i){
    minT = max(minT,min(x.at(i),L-x.at(i)));
  }
  int maxT = 0;
  for(i=0;i<n;++i){
    maxT = max(maxT,max(x.at(i),L-x.at(i)));
  }
  cout << "min = " << minT << endl;
  cout << "max = " << maxT << endl;
}
