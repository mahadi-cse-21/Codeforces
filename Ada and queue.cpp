#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,tmp=0;
    cin>>n;
    deque<int>q,q1;
    while(n--)
    {
        string s;
        cin>>s;
        if(s=="back")
        {
            if(q.empty())
            {
                cout<<"No job for Ada?"<<endl;
                continue;
            }
            else
            {
                if(tmp==0)
                {
                    cout<<q.back();
                    q.pop_back();
                    q1.pop_front();
                }
                else
                {
                    cout<<q.front();
                    q.pop_front();
                    q1.pop_back();
                }

                cout<<endl;
            }
        }
        else if(s=="front")
        {
            if(q.empty())
            {
                cout<<"No job for Ada?"<<endl;
                continue;
            }
            else
            {

                if(tmp==0)
                {
                    cout<<q.front();
                    q.pop_front();
                    q1.pop_back();
                }
                else
                {
                    cout<<q.back();
                    q.pop_back();
                    q1.pop_front();
                }
                cout<<endl;
            }

        }
        else if(s=="reverse")
        {

            if(tmp==0) tmp=1;
            else tmp=0;
        }

        else if(s=="push_back")
        {
            int n;
            cin>>n;
            if(tmp==0)
            {
                q.push_back(n);
                q1.push_front(n);
            }
            else
            {
                q.push_front(n);
                q1.push_back(n);
            }

        }

        else if(s=="toFront")
        {
            int n;
            cin>>n;
            if(tmp==0)
            {
                q.push_front(n);
                q1.push_back(n);
            }

            else
            {
                q.push_back(n);
                q1.push_front(n);
            }
        }
    }

    return 0;
}
