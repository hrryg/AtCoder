#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,i,a,b,cnt=1;
  bool Pa=true,Qb=true;
  cin >> N;
  vector<int> P(N),Q(N),R(N);

  for(i=0;i<N;i++)
  cin >> P.at(i);
  for(i=0;i<N;i++)
  cin >> Q.at(i);
  for(i=0;i<N;i++)
  R.at(i) = i+1;
  

  do{
    for(i=0;i<N;i++){
      if(P.at(i)!=R.at(i)){
        Pa = false;
        break;
      }
    }
    for(i=0;i<N;i++){
      if(Q.at(i)!=R.at(i)){
        Qb = false;
        break;
      }
    }
    if(Pa)
    a = cnt;
    if(Qb)
    b = cnt;
    cnt++;
    Pa = true;
    Qb = true;
  }while(next_permutation(R.begin(),R.end()));

  cout << abs(a-b) << endl;


}
