#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long int ll;
typedef pair<int,int> P;
const int INF = 1e9+7;

int main(){
    int N,K,S;
    cin >> N >> K >> S;
    if(S==1e9){
        rep(i,N){
            if(i<K){
                cout << S << " ";
            }else{
                cout << 1 << " ";
            }
        }
    }else{
        rep(i,N){
            if(i<K){
                cout << S << " ";
            }else{
                cout << S+1 << " ";
            }
        }
    }
}