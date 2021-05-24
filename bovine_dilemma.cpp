#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int arr[50];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        int areas[50];
        int c = 0;
        for(int r=0;r<n-1;r++)
        {
            for(int s=r+1;s<n;s++)
            {
                int p=0;
                int a = arr[s]-arr[r];
                for(p=0;p<c;p++)
                {
                    if(a==areas[p])
                    {
                        break;
                    }
                }
                if(p==c)
                {
                    areas[c]=a;
                    c++;
                }
            }
        }
        cout<<c<<endl;

    }
    return 0;
}
