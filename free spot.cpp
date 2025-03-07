#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w,h,n;
    while(1)
    {
        cin>>w>>h>>n;
        int v[h][w];
        if(w==0) break;
        for(int i=0; i<h; i++)
        {
            for(int j=0; j<w; j++)
            {
                v[i][j]=0;
            }
        }
        int res=0;
       while(n--)
        {
            int a,b,c,d;
            cin>>a>>b>>c>>d;
            int x1 = a<c? a : c;
            int x2 = a>c? a : c;
            int y1 = b<d? b : d;
            int y2 = b>d? b : d;
            x1--;
            x2--;
            y1--;
            y2--;
            for(int i=y1; i<=y2; i++)
            {
                for(int j=x1; j<=x2; j++)
                {
                    v[i][j]=1;
                }
            }
        }
        for(int i=0; i<h; i++)
        {
            for(int j=0; j<w; j++)
            {
                if(v[i][j]!=1) res++;
            }
        }

        if(res==1) cout<<"There is one empty spot."<<endl;
   else if(res==0) cout<<"There is no empty spots."<<endl;
        else cout<<"There are "<<res<<" empty spots."<<endl;
    }
    return 0;
}
/*
There is no empty spots.
There is one empty spot.
There are 83470 empty spots.
*/
