#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,L,i,aji=0;
  cin >> N >> L;

  for(i=1;i<=N;i++)
  aji += L+i-1;

  if(L>=0)
  cout << aji - L << endl;
  else{
    if(N>L*-1)
    cout << aji << endl;
    else
    cout << aji - (L+N-1) << endl;
  }

}
