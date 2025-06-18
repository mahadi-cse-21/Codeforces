#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int test = 0;
    int test1 =0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            test1=1;
        }
    }
    
    if(test1==0) 
    {
        cout<<"yes"<<endl<<1<<" "<<1<<endl;
        
        return 0;
    }

    int last;
    for (int i = n - 1; i > 0; i--)
    {
        if (a[i] < a[i - 1])
        {
            last = i;
            break;
        }
    }
    int fast;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            fast = i;
            break;
        }
    }
    int last1 = last;
    int fast1 = fast;
    for (int i = fast1; last1 >= fast1; i++)
    {
        swap(a[last1], a[fast1]);
        last1--;
        fast1++;
    }
   
    for (int i = 0; i < n-1; i++)
    {
        
        if (a[i] > a[i + 1])
        {
            test = 1;
        }
    }

    if (test)
    {
        cout << "no" << endl;
    }
    else
    {
       

        cout << "yes" << endl
             << fast+1 << " " << last+1;
    }
    return 0;
}