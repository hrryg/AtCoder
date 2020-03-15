#include <bits/stdc++.h>
using namespace std;
#define loop(i,n) for(int i=0;i<n;++i)

int main(){
  int N,cnt=1;
  cin >> N;
  vector<int> H(N);
  loop(i,N)
    cin >> H.at(i);
  int highest = H.at(0);
  for(int i=1;i<N;++i){
    if(H.at(i)>=highest){
      ++cnt;
      highest = H.at(i);
    }
  }
  cout << cnt;

}
