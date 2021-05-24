#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int G, P;
        cin>>G>>P;
        int arr[10];
        for(int i=0;i<10;i++)
            cin>>arr[i];
        int a=0;
        for(int i=G; i<10; i++)
        {
            a+=arr[i];
        }
        int min = 1 + (a/P);
        int max;
        int b = (a%P) + arr[G-1];
        if(b%P==0)
            max = min + b/P -1;
        else max = min + b/P;
        cout<<min<<" "<<max<<endl;
    }
    return 0;
}
