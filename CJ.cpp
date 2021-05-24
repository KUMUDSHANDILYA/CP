#include<bits/stdc++.h>
using namespace std;

int solve(char str[], int x, int y)
{
    int cost = 0;
    int i = 0;
    while(str[i+1]!='\0')
    {
        if(str[i]=='C' && str[i+1]=='J')
        {
            cost+=x;
        }
        else if(str[i]=='J' && str[i+1]=='C')
        {
            cost+=y;
        }
        i++;
    }
    i=0;
    int j=0;
    int l = strlen(str);
    while(j<l)
    {
        //cout<<i<<" "<<j<<endl;

        while(i<l && str[i]!='?')
        {
            i++;
        }
        cout<<i<<endl;
        if(i==l)
            break;
        j=i;
        //cout<<-1<<endl;
        while(j<l-1 && str[j+1]=='?')
        {
           // cout<<2<<endl;
            j++;
        }
        if(i==0)
        {
            if(x>=0 && y>=0)
            {
                cost+=0;
            }
            else
            {
                //
            }
            j++;
            i=j;
        }
        else if(j==l-1)
        {
            if(x>=0 && y>=0)
            {
                cost+=0;
            }
            else
            {
                j++;
                i=j;
            }
        }
        else
        {
            //cout<<3<<endl;
            if(x>=0 && y>=0)
            {
                if(str[i-1] == str[j+1])
                {
                    cost+=0;
                }
                else if(str[i-1] == 'C' && str[i+1] == 'J')
                {
                    cost += x;
                }
                else {cost+=y;}
                j++;
                i=j;
            }
            else
            {

            }
        }
    }
    //cout<<"2\n";
    return cost;
}

int main()
{
    int T;
    cin>>T;
    int t = T;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        char str[11];
        cin>>str;
        int ans = solve(str, x, y);
        cout<<"Case #"<<(T-t)<<": "<<ans<<endl;
    }
    return 0;
}
