#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int x, y;
        cin>>x>>y;
        int ans;
        if(x==y)
        {
            ans = x+y;
        }
        else if(x>y)
        {
            ans = 2*x - 1;
        }
        else
        {
            ans = 2*y - 1;
        }
        cout<<ans<<"\n";
    }
}
