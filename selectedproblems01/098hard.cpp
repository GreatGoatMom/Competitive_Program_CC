#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) for(int i=0;i < (n);i++)
#define ALL(obj) (obj).begin(),(obj).end()
#define SCANF(i) int i;scanf("%d",&i)
using namespace std;
using P = pair<int,int>;
const long long INF = 1LL << 60;
const int IINF=100000000;
const int MOD = (int)1e9 + 7;
typedef long long ll;
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
    ll n;scanf("%lld",&n);
    ll color[3]={0,0,0};
    ll ans = 1; ll mod = 1000000007;
    REP(i,n){
        ll tmp;scanf("%lld",&tmp);
        bool flag = true;int cnt=0;
        REP(j,3){
            if(cnt == 0 & color[j]==tmp){
                cnt++;
                color[j]++;
            } else if (color[j]==tmp){
                cnt++;
            } else if(j==3 && cnt == 0){
                flag = false;
            }
        }
        ans *= cnt;ans %= mod;
        if(!flag)cout << 0 << endl,exit(0);
    }
    printf("%lld\n",ans);
}  