#include <bits/stdc++.h>
using namespace std;


void solve1(){
    int n, x;
    cin >> n >> x;

    vector<int> pil;
    for(int i = 0; i < x; i++)
    pil.push_back(i);
    
    for(int i = x + 1; i < n; i++)
    pil.push_back(i);
    
    if(x < n)
    pil.push_back(x);
    
    for(int i = 0; i < n; i++)
        cout << pil[i] << " ";
        cout << endl;
}

int main() {
   

    int tc;
    cin >> tc;
    while (tc--) solve1();
}