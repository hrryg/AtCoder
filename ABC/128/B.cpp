#include <bits/stdc++.h>
using namespace std;
#define loop(i,n) for(int i=0;i<n;++i)

bool my_c(tuple<string,int,int>a,tuple<string,int,int>b){
  if(get<0>(a)!=get<0>(b)){
    return get<0>(a) < get<0>(b);
  }
  if(get<1>(a)!=get<1>(b)){
    return get<1>(a) > get<1>(b);
  }else{
    return true;
  }
}
int main(){
  int N;
  cin >> N;
  vector<tuple<string,int,int>> r(N);
  loop(i,N){
    cin >> get<0>(r.at(i)) >> get<1>(r.at(i));
    get<2>(r.at(i)) = i+1;
  }
  sort(r.begin(),r.end(),my_c);

  loop(i,N){
    cout << get<2>(r.at(i)) << endl;
  }

}
