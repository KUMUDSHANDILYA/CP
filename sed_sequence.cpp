#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n, k;
        cin>>n>>k;
        int sum = 0 ;
        int a;
        for(int j=0;j<n;j++)
        {
            cin>>a;
            sum = sum + a;
        }
        if(sum%k==0)
        {
            cout<<"0\n";
        }
        else cout<<"1\n";
    }
    return 0;
}
