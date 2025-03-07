#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long m, q;
    cin >> m >> q;

    string mov[m];
    for (long long i = 0; i < m; i++)
    {
        cin >> mov[i];
    }


    while(q--)
    {
        string s;
        cin >> s;
        long long  ms=0;
        long long ind=0;
        for (long long i = 0; i < m; i++)
        {
            if(mov[i].length()<s.length()) continue;
            for (long long j = 0; j <=mov[i].length()-s.length(); j++)
            {
                long long x=0;

                for (long long k = j; k < j+s.length(); k++)
                {
                    x+=(s[k-j]==mov[i][k]);
                }
                if(x>ms)
                {
                    ms = x;
                    ind = i+1;
                }
            }
        }
        cout << ind << endl;
    }


    return 0;
}
