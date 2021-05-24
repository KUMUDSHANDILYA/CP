#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int d, c;
        cin>>d>>c;
        int a1, a2, a3;
        cin>>a1>>a2>>a3;
        int b1, b2, b3;
        cin>>b1>>b2>>b3;
        int s1 = 0, s2 = 0;
        if(a1+a2+a3>=150)
        {
            s1+=d;
        }
        if(b1+b2+b3>=150)
        {
            s2+=d;
        }
        if(s1+s2>c)
        {
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
    return 0;
}
