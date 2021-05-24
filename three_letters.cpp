#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        char str[100001];
        cin>>str;
        int arr[26] = {0};
        for(int j=0;str[j]!='\0';j++)
        {
            arr[str[j]-'a']++;
        }
        int pairs = 0, singles = 0;
        for(int j=0;j<26;j++)
        {
            pairs = pairs + arr[j]/2;
            singles = singles + arr[j]%2;
        }
        int ans;
        if(singles>=pairs)
        {
            ans = pairs;
        }
        else
        {
            ans = singles;
            pairs = pairs - singles;
            if(singles%2==0)
            {
                ans = ans + singles/2;
            }
            else ans = ans + singles/2 + 1;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
