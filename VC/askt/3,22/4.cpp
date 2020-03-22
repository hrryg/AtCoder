#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
#define rep(i,n) for(int i=0;i<n;++i)
#define Sort(a) sort(a.begin(),a.end())
const int INF = 1e9+7;
bool pow6(int x){
  if(x==36||x==216||x==1296||x==7776||x==46656)
    return false;
  else
    return true;
}
int main(){
  int N,n9,n6,n1;
  cin >> N;
  int cnt = 0;
  while(N>0){
    if(N/9>=9&&pow6(N)&&N%9!=5&&N%9!=4){
      n9 = N;
      for(int i=1;i<INF;++i){
        n9 = n9/9;
        if(n9<9){
          n9 = i;
          break;
        }
      }
      N -= pow(9,n9);
      ++cnt;
    }else if(N/6>=6){
      n6 = N;
      for(int i=1;i<INF;++i){
        n6 = n6/6;
        if(n6<6){
          n6 = i;
          break;
        }
      }
      N -= pow(6,n6);
      ++cnt;
    }else{
      if(N>=9&&N%9!=5&&N%9!=4){
        N -= 9;
        ++cnt;
      }else if(N>=6){
        N -= 6;
        ++cnt;
      }else if(N<6){
        cnt += N;
        break;
      }
    }
  }
  cout << cnt << endl;
}
