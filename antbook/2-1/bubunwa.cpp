#include <bits/stdc++.h>
using namespace std;
int n,k,i;
vector<int> a;
bool dfs(int i,int sum){
  if(i==n)
    return sum == k;
  if(dfs(i+1,sum))
    return true;
  if(dfs(i+1,sum+a.at(i)))
    return true;
  return false;
}
int main(){
  cin >> n;
  a.assign(n,0);
  for(i=0;i<n;++i)
    cin >> a.at(i);
  cin >> k;
  if(dfs(0,0))
    cout << "Yes";
  else
    cout <<"No";
}
