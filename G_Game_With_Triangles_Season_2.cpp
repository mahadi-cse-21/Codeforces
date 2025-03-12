#include <bits/stdc++.h>
using namespace std;
#define M_PI 3.14159265358979323846
using ll = long long;

// Function to check if two triangles intersect
bool trianglesIntersect(vector<int>& t1, vector<int>& t2, int n) {
    // Convert vertices to coordinates on unit circle
    vector<pair<double, double>> points(n);
    for(int i = 0; i < n; i++) {
        double angle = 2 * M_PI * i / n;
        points[i] = {cos(angle), sin(angle)};
    }
    
    // Check if any line segment intersects
    auto lineIntersect = [&](pair<double,double> p1, pair<double,double> p2,
                            pair<double,double> q1, pair<double,double> q2) {
        double a1 = p2.second - p1.second;
        double b1 = p1.first - p2.first;
        double c1 = a1 * p1.first + b1 * p1.second;
        
        double a2 = q2.second - q1.second;
        double b2 = q1.first - q2.first;
        double c2 = a2 * q1.first + b2 * q1.second;
        
        double det = a1 * b2 - a2 * b1;
        if(abs(det) < 1e-9) return false;
        
        double x = (b2 * c1 - b1 * c2) / det;
        double y = (a1 * c2 - a2 * c1) / det;
        
        return x >= min(p1.first, p2.first) - 1e-9 && x <= max(p1.first, p2.first) + 1e-9 &&
               x >= min(q1.first, q2.first) - 1e-9 && x <= max(q1.first, q2.first) + 1e-9 &&
               y >= min(p1.second, p2.second) - 1e-9 && y <= max(p1.second, p2.second) + 1e-9 &&
               y >= min(q1.second, q2.second) - 1e-9 && y <= max(q1.second, q2.second) + 1e-9;
    };
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(lineIntersect(points[t1[i]], points[t1[(i+1)%3]], 
                           points[t2[j]], points[t2[(j+1)%3]])) {
                return true;
            }
        }
    }
    return false;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<vector<int>> triangles;
    ll maxScore = 0;
    
    function<void(int, ll)> backtrack = [&](int pos, ll score) {
        maxScore = max(maxScore, score);
        if(pos >= n) return;
        
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                for(int k = j + 1; k < n; k++) {
                    vector<int> curr = {i, j, k};
                    bool valid = true;
                    
                    // Check intersection with existing triangles
                    for(auto& t : triangles) {
                        if(trianglesIntersect(curr, t, n)) {
                            valid = false;
                            break;
                        }
                    }
                    
                    if(valid) {
                        triangles.push_back(curr);
                        backtrack(k + 1, score + 1LL * a[i] * a[j] * a[k]);
                        triangles.pop_back();
                    }
                }
            }
        }
    };
    
    backtrack(0, 0);
    cout << maxScore << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}