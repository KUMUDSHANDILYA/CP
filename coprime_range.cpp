#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; n>=i*i; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l, r;
        cin>>l>>r;
        int i = r+1;
        int ans;
        while(i<2000000000)
        {
            if(isPrime(i)==true)
            {
                ans = i;
                break;
            }
            else i++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
