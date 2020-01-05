#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,X,L,i,bound=0,cnt=1;
  cin >> N >> X;
  for(i=0;i<N;i++){
    cin >> L;
    bound += L;
    if(X>=bound)
    cnt++;
    else
    break;
  }
  cout << cnt << endl;
}
