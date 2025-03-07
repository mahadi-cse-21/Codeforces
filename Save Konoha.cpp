#include <iostream>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        long long z;
        cin >> n ;
        cin>>z;

        multiset<long long > s;
        for (int i = 0; i < n; i++)
        {
            long long  a;
            cin >> a;
            s.insert(a);
        }

        int count = 0;
        while (z > 0 && !s.empty())
        {
            auto it = s.end();
            it--;
            z -= *it;
            long long  c = *it;
            c /= 2;
            s.erase(it);
            if (c > 0)  s.insert(c);
            count++;
        }

       if(z<=0) cout << count << endl;
       else cout<<"Evacuate"<<endl;
    }

    return 0;
}
