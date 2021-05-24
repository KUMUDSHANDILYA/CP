#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        char str[100001];
        cin>>str;
        bool used[100001];
        int len = strlen(str);
        for(int j=0;j<len;j++)
        {
            used[j] = false;
        }
        int ans = 0;
        for(int k=1;k<len;k++)
        {
            bool use_need = false;
            if(str[k] == str[k - 1] && !used[k - 1])
                use_need = true;
            if(k>1&& str[k] == str[k-2] && !used[k-2])
                use_need = true;

            used[k] = use_need;
            ans = ans + used[k];
        }
        cout<<ans<<endl;
    }
    return 0;
}
