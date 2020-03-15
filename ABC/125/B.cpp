#include <bits/stdc++.h>
using namespace std;
#define loop(i,n) for(int i=0;i<n;++i)

int main(){
  int N;
  cin >> N;
  vector<int> v(N);
  vector<int> c(N);
  loop(i,N)
    cin >> v.at(i);
  loop(i,N)
    cin >> c.at(i);
  int m = 0;
  loop(i,N){
    if(v.at(i)>c.at(i))
      m += v.at(i)-c.at(i);
  }
  cout << m;
}
