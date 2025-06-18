#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--){
        int n;
        string s;
        cin >> n >> s;
        vector<int> A, B;
        A.reserve(n);
        B.reserve(n);
        for(int i = 0; i < n; i++){
            if(s[i] == 'A') A.push_back(i+1);
            else           B.push_back(i+1);
        }

        bool aling  = false;
        for(int a: A){
            bool bobing = false;
            if(a == 1){
                
                for(int b: B){
                    if(2 <= b && b <= n-1){
                        bobing = true;
                        break;
                    }
                }
            }
            else if(a == n){
                
                for(int b: B){
                    if(b == 1){
                        bobing = true;
                        break;
                    }
                }
            }
            else {
                
                for(int b: B){
                    if(b > a){
                        bobing = true;
                        break;
                    }
                }
            }

            if(!bobing){
                
                aling  = true;
                break;
            }
        }

        cout << (aling  ? "Alice\n" : "Bob\n");
    }

    return 0;
}