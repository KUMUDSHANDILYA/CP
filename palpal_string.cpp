#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char str[101];
        cin>>str;
        int count[128] = {0};
        int i=0;
        while(str[i]!='\0')
        {
            count[str[i]]++;
            i++;
        }
        int pairs =  0;
        int odds = 0;
        for(int i=0;i<128;i++)
        {
            if(count[i]!=0)
               {
                    pairs+=(count[i]/2);
                    count[i] = count[i]%2;
               }
        }
        for(int i=0;i<128;i++)
        {
            if(count[i]==1)
                odds++;
        }
        //cout<<pairs<<" "<<odds<<endl;
        if(odds<=pairs)
            cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
