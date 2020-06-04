#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long int ll;
typedef pair<int,int> P;
const int INF = 1e9+7;

int GetDigit(int x){
    return to_string(x).length();
}
int main(){
    ll a,b,x;
    cin >> a >> b >> x;
    int cb=0,N=1e9+1;
    while(N-cb!=1){
        int d=GetDigit(N);
        int num = (cb+N)/2;
        if(a*num+b*d>x){
            N = num;
        }else{
            cb = num;
        }
    }
    cout << cb;
}
