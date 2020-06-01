#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long int ll;
typedef pair<int,int> P;
const ll INF = 1e18;

int main(){
    int N;
    cin >> N;
    vector<ll> A(N);
    rep(i,N){
        cin >> A.at(i);
        if(A.at(i)==0){
            cout << "0";
            return 0;
        }
    }
    ll x=1;
    rep(i,N){
        if(A.at(i)<=1000000000000000000/x){
            x*=A.at(i);
        }else{
            cout << "-1";
            return 0;
        }
    }
    cout << x;
}