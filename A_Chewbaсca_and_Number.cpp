#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   string aupo=s;

   for(int i=0;i<s.size();i++)
   {
       if(s[i]=='9'&& i==0) continue;
    if(s[i]>='5') s[i]='9'- s[i]+48;
   }

   long long a1 = stoll(aupo);
   long long a2 =  stoll(s);
   
   if(aupo=="9") cout<<9;
   else if(a1<a2) 
   { 
     cout<<a1;
   }
   else cout<<a2;
  

    return 0;
}