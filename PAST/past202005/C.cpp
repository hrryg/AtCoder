#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long int ll;
typedef pair<int,int> P;
const int INF = 1e9;

int main(){
    ll a,r,n;
    cin >> a >> r >> n;
    ll t = a*pow(r,n-1);
    if(t>INF||t<0){
        cout << "large" << endl;
    }else{
        cout << t << endl;
    }
}