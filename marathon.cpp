#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int D, d, A, B, C;
        cin>>D>>d>>A>>B>>C;
        int t = D*d;
        int ans;
        if(t>=42)
            ans = C;
        else if(t>=21)
            ans = B;
        else if(t>=10)
            ans = A;
        else ans = 0;
        cout<<ans<<endl;
    }
    return 0;
}
