#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int e;
        cin>>e;
        int w = 100-e;
        int ans;
        if(e==w)
        {
            ans = 2;
        }
        else if(e==0 || w==0)
        {
            ans = 1;
        }
        else if(e<w)
        {
            int d = e;
            while(d>0 && e>0 && w>0)
            {
                if(w%d==0 && e%d==0)
                {
                    w/=d;
                    e/=d;
                }
                d--;
            }
            ans = e+w;
        }
        else if(e>w)
        {
            int d = w;
            while(d>0 && e>0 && w>0)
            {
                if(w%d==0 && e%d==0)
                {
                    w/=d;
                    e/=d;
                }
                d--;
            }
            ans = e+w;
        }
        cout<<ans<<endl;
    }
    return 0;
}
