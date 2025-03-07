#include <bits/stdc++.h>
#include<limits>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    set<pair<int,int>>s,s1;
	    for(int i=0;i<n;i++)
	    {
	        int a,b;
	        cin>>a>>b;
//	        s.insert({a,b});
//	        s.insert({b,a});
	    }
	    auto it1 = s.end();
	    auto it = s1.end();
	    it--;
	    it1--;
	    int max =0 ;//it->first*it1->second+it->second*it1->first;

	    cout<<max<<endl;
	}

}

