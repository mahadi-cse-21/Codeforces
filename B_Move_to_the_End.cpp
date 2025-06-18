#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
 
        
        vector<long long> leftMax(n);
        leftMax[0] = a[0];
        for (int i = 1; i < n; i++){
            leftMax[i] = max(leftMax[i-1], a[i]);
        }
 
       
        vector<long long> tailSum(n+1, 0);
        for (int r = 1; r <= n; r++){
            tailSum[r] = tailSum[r-1] + a[n - r];
        }
 
        
        cout << *max_element(a.begin(), a.end());
 
        
        for (int k = 2; k <= n; k++){
            int r = k - 1;
            long long candidate = tailSum[r] + leftMax[n - k];
            cout << " " << candidate;
        }
        cout << "\n";
    }
    return 0;
}