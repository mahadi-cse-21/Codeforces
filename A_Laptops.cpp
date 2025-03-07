#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<pair<int, int>> v;
    int a[n], b[n];
    int tmp=0;
    
    for (int i = 0; i < n; i++) {
       
        cin >> a[i] >> b[i];
        if(a[i]!=b[i])
        {
            tmp=1;
        }
        
    }

 
    
    if (tmp) {
        cout << "Happy Alex\n";
    } else {
        cout << "Poor Alex\n";
    }

    return 0;
}
