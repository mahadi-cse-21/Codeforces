/*
D. Decrease the Sum of Digits
*/
#include <bits/stdc++.h>
using namespace std;    
#define int long long
int sum(int n){
    int s=0;
    while(n){
        s+=n%10;
        n/=10;
    }
    return s;
}
int32_t main() {
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int ans=0;
        if(sum(n)<=s){
            cout<<0<<endl;
            continue;
        }
        int p=1;
        for(int i=0;i<=18;i++){
            int x=(n/p)%10;
            int add=(10-x)*p;
            n+=add;
            ans+=add;
            if(sum(n)<=s){
                break;
            }
            p*=10;
        }
        cout<<ans<<endl;
    }
    return 0;
}