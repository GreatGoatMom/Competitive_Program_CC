#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) for(int i=0;i < (n);i++)
#define ALL(obj) (obj).begin(),(obj).end()
#define SCANF(i) int i;scanf("%d",&i)
using namespace std;

const long long INF = 1LL << 60;
const int IINF=100000000;
const int MOD = (int)1e9 + 7;
typedef long long ll;
using P=pair<ll,ll>;
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

signed main () {
    int n,m;cin >> n >> m;
    vector<P> list;
    REP(i,m){
        ll a,b;cin >> a >> b;
        list.push_back(make_pair(b,a));
    }
    int cnt = 0;ll bridgenum = -1;
    sort(ALL(list));
    FOR(i,0,m){
        P tmp = list[i];
        ll s = tmp.second;ll e = tmp.first;
        if(s>bridgenum)bridgenum=e-1,cnt++;
    }
    cout << cnt << endl;
}