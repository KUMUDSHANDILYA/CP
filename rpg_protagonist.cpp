#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int p, f;
        cin>>p>>f;
        int ns, nw;
        cin>>ns>>nw;
        int s, w;
        cin>>s>>w;
        int light, heavy, l_num, h_num;
        if(s<=w)
        {
            light = s;
            l_num = ns;
            heavy = w;
            h_num = nw;
        }
        else
        {
            light = w;
            l_num = nw;
            heavy = s;
            h_num = ns;
        }
        int max_cap_p = (l_num<=p/light)?l_num:(p/light);
        int ans = 0;
        for(int j=0;j<=max_cap_p;j++)
        {
            int a1 = j;
            int a2 = (h_num<=(p-(a1*light))/heavy)?h_num:(p-(a1*light))/heavy;
            int a3 = (l_num-a1<=(f)/light)?l_num-j:(f/light);
            int a4 = (h_num-a2<=(f-(a3*light))/heavy)?h_num-a2: (f-(a3*light))/heavy;
            int temp = a1+a2+a3+a4;
            //cout<<a1<<a2<<a3<<a4<<"\n";
            if(temp>ans)
            {
                ans = temp;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;

}
