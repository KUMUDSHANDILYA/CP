#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        int d = abs(a-b);
        int x = 10;
        int c = 0;
        /*(while(d>0)
        {
            if(d-x>=0)
            {
                d-=x;
                c++;
            }
            else {
                x--;
            }
        } */
        while(x>0)
        {
            int r = d/x;
            c+=r;
            d%=x;
            if(r==0)
                x--;
        }

        cout<<c<<endl;
    }
    return 0;
}
