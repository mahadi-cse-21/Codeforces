#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a;
    cin>>a;
    while(a--){
        long long int n;
        	cin>>n;
	long long int ans=0;
	ans=(1+n)*n/2;
	long long int x=sqrt(ans);
	if(x*x==ans){
		cout<<-1<<endl;
	}
	else{
		ans=0;
		for(long long int i=1;i<=n;i++){
			ans+=i;
			x=sqrt(ans);
			if(x*x==ans){
				cout<<i+1<<" "<<i<<" ";
				ans+=i+1;
				i++;
			}
			else cout<<i<<" ";
		}
		cout<<endl;
	}
    }
    return 0;
}
