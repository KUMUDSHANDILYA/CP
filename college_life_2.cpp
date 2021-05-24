#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s;
        cin>>s;
        int Q[100000];
        for(int i=0;i<s;i++)
        {
            cin>>Q[i];
        }
        int time=0;
        for(int i=0;i<s;i++)
        {
            int n;
            cin>>n;
            int L;
            for(int j=0;j<n;j++)
            {
                cin>>L;
                time+=L;
                if(j!=0)
                {
                    time-=Q[i];
                }
            }
        }
        cout<<time<<endl;
    }
    return 0;
}
