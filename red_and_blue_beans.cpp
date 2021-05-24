#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, d;
        cin>>a>>b>>d;
        if(d == 0)
        {
            if(a == b)
            {
                cout<<"YES\n";

            }
            else {
                cout<<"NO\n";

            }
        }
        else {
            if(abs(a-b)%d == 0){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}
