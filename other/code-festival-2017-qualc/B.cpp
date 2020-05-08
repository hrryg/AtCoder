#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  int N;
  int all=1,bad=1;
  cin >> N;
  vector<int> A(N);
  rep(i,N){
    cin >> A.at(i);
    all *= 3;
    if(A.at(i)%2==0){
      bad *=  2;
    }
  }
  cout << all - bad << endl;
}
