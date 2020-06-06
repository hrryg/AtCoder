#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long int ll;
typedef pair<int,int> P;
const int INF = 1e9+7;

int main(){
    int N,M,Q;
    cin >> N >> M >> Q;
    vector<vector<int>> a(N, vector<int>(M,0));
    vector<int> p(M,N);
    rep(i,Q){
        int t;
        cin >> t;
        if(t==1){
            int x,cnt=0;;
            cin >> x;
            rep(i,M){
                if(a.at(x-1).at(i)){
                    cnt += p.at(i);
                }
            }
            cout << cnt << endl;
        }else{
            int x,y;
            cin >> x >> y;
            --p.at(y-1);
            a.at(x-1).at(y-1) = 1;
        }
    }
}