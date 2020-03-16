#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,i,j;
  double sum=0,num=0;
  cin >> N;
  vector<pair<int,int>> t(N);
  for(i=1;i<N;++i)
    num += i;
  for(i=0;i<N;++i)
    cin >> t.at(i).first >> t.at(i).second;
  for(i=0;i<N;++i){
    for(j=i+1;j<N;++j){
      double dis = sqrt(pow(t.at(i).first-t.at(j).first,2)+pow(t.at(i).second-t.at(j).second,2));
      sum += dis;
    }
  }
  sum /= num;
  cout << setprecision(100) << sum * (N-1) << endl;
}
