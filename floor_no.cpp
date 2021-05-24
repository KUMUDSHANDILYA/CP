#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x;
        cin>>n>>x;
        if(n<=2)
            cout<<1<<endl;
        else{
            int a = (n-3)/(x);
            if(n!=3 && (n-3)%(x)==0)
                cout<<a+1<<endl;
            else cout<<a+2<<endl;
        }

    }
    return 0;
}
