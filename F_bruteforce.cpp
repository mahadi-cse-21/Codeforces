#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a, b;
    while(1)
    {
        cin>>a>>b;
        double ans =0.0 ;
        int ap;
        if(a==0&&b==0)
        {
            break;
        }
        for(int i = 1; i<=a; i++)
        {
            if(a/i<=b)
            {

                break;
            }
            double d = 0.3*sqrt((a)/i-b);
            double len = d*i;
            if(ans<len)
            {
                ans = len;
                ap=i;
            }
        }
        int tmp=0;
        for(int i = 1; i<=a; i++)
        {
            if(a/i<=b)
            {
                break;
            }
            double d = 0.3*sqrt((a)/i-b);
            double len = d*i;
            if((ans-len)<1e-9)
            {
                tmp++;
            }
        }
        if(tmp==1)
        {
            cout<<ap<<endl;
        }
        else cout<<"0"<<endl;



    }
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    double a, b;
    while (true) {
        cin >> a >> b;
        if (a == 0 && b == 0) {
            break;
        }

        double max_length = 0.0;
        int ap = 0;

        for (int i = 1; i <= a; ++i) {
            if (a / i <= b) {
                break;
            }

            double D = 0.3 * sqrt(a / i - b);
            double necklace_length = D * i;

            if (necklace_length > max_length) {
                max_length = necklace_length;
                ap = i;
            }
        }

        // Count how many times max_length occurs
        int count_max_length = 0;
        for (int i = 1; i <= a; ++i) {
            if (a / i <= b) {
                break;
            }

            double D = 0.3 * sqrt(a / i - b);
            double necklace_length = D * i;

            if (fabs(necklace_length - max_length) < 1e-9) {
                count_max_length++;
            }
        }

        if (count_max_length == 1) {
            cout << ap << endl;
        } else {
            cout << "0" << endl;
        }
    }

    return 0;
}
*/
