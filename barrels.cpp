/*#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n, k;
        cin>>n>>k;
        int arr[2*100000];
        for(int j =0;j<n;j++)
        {
            cin>>arr[j];
        }
        sort(arr, arr+n);
        for(int a = 0;a<k &&(a<n-1);a++){
            arr[n-1] = arr[n-1]+ arr[n-2-a];
            arr[n-2-a] = 0;
        }
        int maxDiff = arr[n-1];
        cout<<maxDiff<<"\n";
    }
}
*/
#include <iostream>
using namespace std;

class Element {
    public:
     int type;
     int status = 0;
};

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n, m;
        cin>>n>>m;
        Element arr[n][m];
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                cin>>arr[j][k].type;
                if(arr[j][k].type==1){
                    arr[j][k].status = 1;
                }
            }
        }
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                if(arr[j][k].type == 1){
                    int o = j-1;
                    while(arr[o][k].type==0&&o>=0){
                        arr[o][k].status = 1;
                        o--;
                    }
                    o=j+1;
                    while(arr[o][k].type==0&&o<n){
                        arr[o][k].status = 1;
                        o++;
                    }
                    o = k-1;
                    while(arr[j][o].type==0&&o>=0){
                        arr[j][o].status = 1;
                        o--;
                    }
                    o = k+1;
                    while(arr[j][o].type==0&&o<m){
                        arr[j][o].status = 1;
                        o++;
                    }
                }
            }
        }

        int count = 0;
        for(int c = 0; c<n; c++){
            for(int d= 0;d<m;d++){
                if(arr[c][d].status == 1){
                    count++;
                }
            }
        }
        cout<<count<<"\n";
    }
	return 0;
}
