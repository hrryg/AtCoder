#include <bits/stdc++.h>
using namespace std;

bool my_compare(pair<int, string> a, pair<int, string> b) {
    if(a.first != b.first){
        return a.first > b.first;
    }
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return true;
    }
}
int main(){
  int N,i,num=0;
  cin >> N;
  vector<string> S(N);
  map<string,int> cnt;
  vector<pair<int,string>> V;

  for(i=0;i<N;i++)
  cin >> S.at(i);

  sort(S.begin(),S.end());

  for(i=0;i<N;i++){
    if(cnt.count(S.at(i)))
    cnt[S.at(i)]++;
    else
    cnt[S.at(i)] = 1;
  }

  for(auto p : cnt){
    auto k = p.first;
    auto v = p.first;
    V.push_back(make_pair(p.second, p.first));
  }
  sort(V.begin(),V.end(),my_compare);

  for(i=0;i<V.size();i++){
    if(i==0)
    num = V.at(i).first;
    if(num == V.at(i).first)
    cout << V.at(i).second << endl;
    else
    break;
  }

}
