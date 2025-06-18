#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6 + 5; // reasonable upper limit

vector<bool> is_prime(MAX, true);

void sieve()
{
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i < MAX; ++i)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j < MAX; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
}

bool check_prime(long long n)
{
    if (n < MAX)
        return is_prime[n];
    for (long long i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    sieve();

    int tc;
    cin >> tc;
    while (tc--)
    {
        long long a, b;
        cin >> a >> b;

        if (a == 2 && b == 1)
            cout << "YES" << endl;
        else if (a % 2 == 0)
            cout << "NO" << endl;
                else if (a == 1 and b ==2)
            cout << "YES" << endl;
        else if (check_prime(a) and b==1)
            cout << "YES" << endl;
    
        else
            cout << "NO" << endl;
    }

    return 0;
}
