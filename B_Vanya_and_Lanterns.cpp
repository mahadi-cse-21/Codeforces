#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    double l;
    cin >> n >> l;
    
   
    double a[n];
    
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    
    sort(a, a + n);
    
    
    double max_gap = 0;
    for (int i = 0; i < n - 1; i++) {
        max_gap = max(max_gap, a[i+1] - a[i]);
    }
    

    double start_gap = a[0];
    
    
    double end_gap = l - a[n - 1];
    
    
    double result = max(max_gap / 2, max(start_gap, end_gap));
    
    
    printf("%.10lf", result);
    
    return 0;
}
