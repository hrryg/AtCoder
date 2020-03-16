#include <bits/stdc++.h>
using namespace std;
const long INF = 1e15+7;
int main(){
  long N;
  long minN = INF;
  cin >> N;
  for(long i=1;i<=sqrt(N);++i){
    if(N%i)
      continue;
    long num = i + N/i -2;
    minN = min(minN,num);
  }
  cout << minN;
}
