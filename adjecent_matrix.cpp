#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==1)
            cout<<1<<endl;
        else if(n==2)
            cout<<-1<<endl;
        else
        {
            int a = 1;
            int b = ((n*n +1)/2) + 1;
            for(int i=1;i<=n*n; i++)
            {
                if(i%2!=0)
                {
                    cout<<a<<" ";
                    a++;
                }
                else {
                    cout<<b<<" ";
                    b++;
                }
                if(i%n==0)
                    cout<<endl;
            }
        }
    }
    return 0;
}
