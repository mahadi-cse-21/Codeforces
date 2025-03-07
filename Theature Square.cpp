#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    long long d = a/c;
    long long e = b/c;
    if(c*d<a) d++;
    if(c*e<b) e++;
    cout<<d*e;
    return 0;
}
