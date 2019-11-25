#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,i,cnt=0;
  cin >> N;

  for(i=1;i<=N;i++){
    if(1<=i && i<=9 || 100<=i && i<=999 || 10000<=i && i<=99999)
    cnt++;
  }
  cout << cnt << endl;
}
