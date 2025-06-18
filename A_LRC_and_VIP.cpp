#include<bits/stdc++.h>
using namespace std;
#define ll long long




void solve(){
    int n; cin >> n;
    vector<int>arr(n);

    map<int,int> feq;

    for(int i=0; i<n; i++){
        int x; cin >> x;
        arr[i] = x;
        feq[x]++;
    }

    if(feq.size() == 1){
        cout << "NO\n";
        return;

    } 
    else cout << "YES\n";

    auto it =  *max_element(arr.begin(), arr.end());
    // cout << it << endl;
    for(int i=0; i<n; i++){
        // if(arr[i] == it){
        //     cout << 2 << " ";
        // }

        cout << ((arr[i] == it) ? 2 : 1) << " ";
    }
    cout << endl;

}

int main() {
    int t;
    cin >> t;

    while (t--) solve();
}