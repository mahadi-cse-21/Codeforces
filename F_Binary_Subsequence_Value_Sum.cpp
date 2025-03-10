#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
const ll MOD = 998244353;
 
ll modexp(ll a, ll b, ll m=MOD) {
    ll res = 1 % m;
    a %= m;
    while(b){
        if(b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}
 
ll modinv(ll a, ll m=MOD) {
    return modexp(a, m-2, m);
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        int A = 0;
        for(char c: s){
            if(c=='1') A++;
        }
        ll pow2_n = modexp(2, n, MOD);
        ll inv16 = modinv(16, MOD);
 
        auto computeAnswer = [&]()-> ll {
            ll term = (4LL * A % MOD * A % MOD) % MOD;
            term = (term - (4LL * A % MOD * n % MOD) % MOD + MOD) % MOD;
            ll nsq = (1LL * n * n) % MOD;
            term = (term + nsq) % MOD;
            term = (term + n) % MOD;
            term = (term - 2 + MOD) % MOD;
            ll ans = ((pow2_n * inv16) % MOD * term) % MOD;
            return ans;
        };
 
        for(int i = 0; i < q; i++){
            int pos;
            cin >> pos; 
            pos--;
            if(s[pos]=='0'){
                s[pos] = '1';
                A++;
            } else {
                s[pos] = '0';
                A--;
            }
            ll ans = computeAnswer();
            cout << ans % MOD << "\n";
        }
    }
    return 0;
}