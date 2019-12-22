#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,i,cnt=0;
  vector<int> p(n);
  vector<int> num(3);
  cin >> n;

  for(i=0;i<n;i++)
  cin >> p.at(i);

  for(i=1;i<n-1;i++){
    num.at(0) = p.at(i-1);
    num.at(1) = p.at(i);
    num.at(2) = p.at(i+1);
    sort(num.begin(),num.end());
    if(p.at(i)==num.at(1))
    cnt++;
  }
  cout << cnt << endl;
}
