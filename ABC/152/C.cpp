#include <bits/stdc++.h>
using namespace std;


int main(){
  int N,m,sum=1,P,i;
  cin >> N >> m;

  for(i=0;i<N-1;i++){
    cin >> P;
    if(m>P){
      sum++;
      m = min(m,P);
    }
  }
  cout << sum;
}
