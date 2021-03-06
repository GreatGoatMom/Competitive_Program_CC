#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) for(int i=0;i < (n);i++)
#define ALL(obj) (obj).begin(),(obj).end()
#define SCANF(i) int i;scanf("%d",&i)
typedef long long ll;
using namespace std;
using P = pair<int,int>;
const long long INF = 1LL << 60;
const int IINF=100000000;
const int MOD = (int)1e9 + 7;
//約数列挙
vector<long long> divisor(long long n) {
    vector<long long> ret;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            if (i * i != n) ret.push_back(n / i);
        }
    }
    //sort(ret.begin(), ret.end()); // 昇順に並べる
    return ret;
}
vector<int> dx={1,0,-1,0};vector<int> dy={0,-1,0,1};
struct UF{
    vector<int>par;
    UF(int x){
        par.resize(x);
        REP(i,x)par[i]=i;
    }
    int root(int x){
        if(par[x]==x)return x;
        return par[x]=root(par[x]);
    }
    void unite(int x,int y){
        int rx=root(x);int ry=root(y);
        if(rx==ry)return;
        par[ry]=rx;
    }
    bool same(int x,int y){
        int rx=root(x);int ry=root(y);
        return rx==ry;
    }
};

signed main () {
    int n,m;cin >> n >> m;
    int ans=0;
    UF tree(n);
    REP(i,m){
        int a,b;cin >> a >> b;
        a--;b--;
        if(!tree.same(a,b)){
            tree.unite(a,b);
        }
    }
    vector<bool> seen(n,false);
    REP(i,n){
        ll t = tree.root(i);
        if(!seen[t])seen[t]=true,ans++;
    }
    if(ans==0)cout << ans << endl;
    else cout << ans-1 << endl;
}//https://atcoder.jp/contests/arc032/tasks/arc032_2