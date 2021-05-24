#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int SieveOfEratosthenes(int arr[], int n)
{
    bool prime[1000001];
    memset(prime, true, sizeof(prime));

    for(int p=2; p*p<=n; p++)
    {
        if(prime[p]==true)
        {
            for(int i=p*p;i<=n;i+=p)
            {
                prime[i]=false;
            }
        }
    }

    int l=0;
    for(int i=2; i<=n;i++)
    {
        if(prime[i])
        {
            arr[l] = i;
            l++;
        }
    }
    return l;
}

int main()
{
    int arr[1000001] = {0};
    int l = SieveOfEratosthenes(arr, 1000001);
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int a, b, c;
    }
    return 0;
}
