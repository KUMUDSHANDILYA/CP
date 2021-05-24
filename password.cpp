#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    char str[1000001];
    while(t--)
    {
        cin>>str;
        int flag = 1;
        int l = strlen(str);
        if(l<10)
        {
            flag = 0;
            //cout<<"1\n";
        }
        else
        {
            int ch = 0;
            int cCh = 0;
            int d = 0;
            int sCh = 0;
            int i=0;
            if(!((str[0]>=97&&str[0]<=122)))
            {
                flag = 0;
                //cout<<"2\n";
            }
            else
            {
                if(!((str[l-1]>=97&&str[l-1]<=122)))
                {
                    flag = 0;
                    //cout<<"3\n";
                }
                else
                {
                    while(i<l)
                    {
                        if(str[i]>=48&&str[i]<=57)
                        {
                            d++;
                        }
                        else if(str[i]>=65&&str[i]<=90)
                        {
                            cCh++;
                        }
                        else if(str[i]>=97&&str[i]<=122)
                        {
                            ch++;
                        }
                        else if(str[i]==38||str[i]==37||str[i]==35||str[i]==63||str[i]==64)
                        {
                            sCh++;
                        }
                        i++;
                    }
                    if(d<1||ch<1||cCh<1||sCh<1)
                    {
                        flag = 0;
                        //cout<<"4\n";
                    }
                }
            }
        }
        if(flag == 0)
        {
            cout<<"NO\n";
        }
        else cout<<"YES\n";
    }
    return 0;
}
