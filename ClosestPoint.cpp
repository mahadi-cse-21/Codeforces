#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            v.push_back(a);

        }
        if(n==2&&abs(v[0]-v[1])!=1) cout<<"Yes"<<endl;
        else{
            cout<<"No"<<endl;
        }

    }

return 0;
}
