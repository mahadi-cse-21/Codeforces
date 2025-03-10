#include <iostream>
#include <vector>
using namespace std;

struct Operation {
    char opL;
    int aL;
    char opR;
    int aR;
};

struct DP {
    long long A, B, C;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<Operation> ops(n);
        for(int i = 0; i < n; i++){
            cin >> ops[i].opL >> ops[i].aL >> ops[i].opR >> ops[i].aR;
        }
        
        DP dp;
        dp.A = 1;
        dp.B = 1;
        dp.C = 0;
        
        for(int i = n - 1; i >= 0; i--){
            char opL = ops[i].opL;
            int aL = ops[i].aL;
            char opR = ops[i].opR;
            int aR = ops[i].aR;
            
            long long fL, constL;
            if(opL == 'x'){
                fL = aL - 1;
                constL = 0;
            } else {
                fL = 0;
                constL = aL;
            }
            
            long long fR, constR;
            if(opR == 'x'){
                fR = aR - 1;
                constR = 0;
            } else {
                fR = 0;
                constR = aR;
            }
            
            long long totConst = constL + constR;
            
            DP next = dp;
            DP cur;
            if(next.A >= next.B){
                cur.A = next.A * (1 + fL);
                cur.B = next.B + next.A * fR;
                cur.C = next.A * totConst + next.C;
            } else {
                cur.A = next.A + next.B * fL;
                cur.B = next.B * (1 + fR);
                cur.C = next.B * totConst + next.C;
            }
            dp = cur;
        }
 
        long long answer = dp.A + dp.B + dp.C;
        cout << answer << "\n";
    }
 
    return 0;
}