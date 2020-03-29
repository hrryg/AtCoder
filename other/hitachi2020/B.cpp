#include <bits/stdc++.h>
using namespace std;

int main(){
  int A,B,M,i;
  cin >> A >> B >> M;
  vector<int> a(A);
  vector<int> b(B);
  vector<tuple<int,int,int>> c(M);

  int mina = 0;
  for(i=0;i<A;++i){
    cin >> a.at(i);
    if(mina==0)
      mina = a.at(i);
    mina = min(mina,a.at(i));
  }
  int minb = 0;
  for(i=0;i<B;++i){
    cin >> b.at(i);
    if(minb==0)
      minb = b.at(i);
    minb = min(minb,b.at(i));
  }
  int minsum = mina+minb;
  for(i=0;i<M;++i)
    cin >> get<0>(c.at(i)) >> get<1>(c.at(i)) >> get<2>(c.at(i));

  for(i=0;i<M;++i){
    minsum = min(minsum,a.at(get<0>(c.at(i))-1)+b.at(get<1>(c.at(i))-1)-get<2>(c.at(i)));
  }
  cout << minsum;

}
