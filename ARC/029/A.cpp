#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,i,j,time=0;
  cin >> N;
  vector<int> t(N);
  for(i=0;i<N;++i){
    cin >> t.at(i);
    time += t.at(i);
  }

  if(N==1)
    cout << time << endl;
  else if(N==2){
    if(t.at(0)>t.at(1))
      cout << t.at(0) << endl;
    else
      cout << t.at(1) << endl;
  }else{
    for(i=1;i<pow(2,N)-1;++i){
      int n1 = 0, n2 = 0, n3 = time;
      for(j=0;j<N;++j){
        if(i >> j & 1)
          n1 += t.at(j);
        else
          n2 += t.at(j);
      }
      n3 = max(n1,n2);
      time = min(time,n3);
    }
    cout << time <<endl;
  }

}
