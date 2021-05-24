#include<bits/stdc++.h>
using namespace std;

bool comparator(int a, int b)
{
    return a>b;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int even[N];
        int odd[N];
        int m = 0;
        int n = 0;
        for(int i=0;i<N;i++)
        {
            int a;
            cin>>a;
            if(a%2==0)
            {
                even[m] = a;
                m++;
            }
            else
            {
                odd[n] = a;
                n++;
            }

        }
        sort(even, even+m, comparator);
        sort(odd, odd+n, comparator);
        //cout<<m<<" "<<n<<endl;
        long long  int alice = 0;
        long long int bob = 0;
        int i=0;
        int j=0;
        int turn = 0;
        while(i<m && j<n)
        {
            if(turn == 0)
            {
                if(even[i]>odd[j])
                {

                    alice+=even[i];
                     i++;
                }
                else {
                    j++;
                }
                turn = 1;
            }
            else
            {
                if(odd[j]>even[i])
                {

                    bob+=odd[j];
                    j++;
                }
                else {
                    i++;
                }
                turn = 0;
            }
        }
        while(i<m)
        {
            if(turn==0)
            {

                alice+=even[i];
                 i++;
                turn = 1;
            }
            else
            {
                i++;
                turn = 0;
            }
        }
        while(j<n)
        {
            if(turn == 1)
            {

                bob+=odd[j];
                j++;
                turn = 0;
            }
            else
            {
                j++;
                turn = 1;
            }
        }
        //cout<<alice<<" "<<bob<<endl;
        if(alice>bob)
            cout<<"Alice\n";
        else if(bob>alice)
            cout<<"Bob\n";
        else cout<<"Tie\n";
    }
    return 0;
}
