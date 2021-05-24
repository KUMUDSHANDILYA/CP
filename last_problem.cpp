#include<bits/stdc++.h>
using namespace std;

int cellValue(int x, int y)
{
    int d = (x+y)-1;
    int a = ((d-1)*d)/2;
    int ans = x + a;
    return ans;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;
        int ans = cellValue(x1, y1);
        for(int i = x1+1; i<=x2; i++)
        {
            ans += cellValue(i, y1);
        }
        for(int i=y1+1; i<=y2; i++)
        {
            ans += cellValue(x2, i);
        }
        cout<<ans<<endl;
    }
    return 0;
}
