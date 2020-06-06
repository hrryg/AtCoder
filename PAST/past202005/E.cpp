#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long int ll;
typedef pair<int,int> P;
const int INF = 1e9+7;

int main(){
    int N,M,Q;
    cin >> N >> M >> Q;
    vector<vector<int>> uv(N);
    rep(i,M){
        int x,y;
        cin >> x >> y;
        uv.at(x-1).push_back(y-1);
        uv.at(y-1).push_back(x-1);
    }
    vector<int> c(N);
    rep(i,N){
        cin >> c.at(i);
    }
    rep(i,Q){
        int t;
        cin >> t;
        if(t==1){
            int x;
            cin >> x;
            cout << c.at(x-1) << endl;
            for(int i=0;i<uv.at(x-1).size();++i){
                c.at(uv.at(x-1).at(i)) = c.at(x-1);
            }
        }else{
            int x,y;
            cin >> x >> y;
            cout << c.at(x-1) << endl;
            c.at(x-1) = y;
        }
    }
}