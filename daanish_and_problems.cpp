#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        //cout<<"Hii\n";
        int A[10];
        for(int i=0;i<10;i++)
        {
            cin>>A[i];
        }
        int k;
        cin>>k;
        int l = 10;
        int ans = 0;
        while(l>0)
        {
            k-=A[l-1];
            if(k<0)
            {
                ans = l;
                break;
            }
            else
            {
                l--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
