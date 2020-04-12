#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        int cnt=0;
        int arr[7]={0,};
        int sum[35]={0,};
        for(int i=0;i<7;i++){cin>>arr[i];}
        for(int i=0;i<7;i++){
            for(int j=i;j<7;j++){
                if(j==i){continue;}
                for(int k=j;k<7;k++){
                    if(k==i||k==j){continue;}
                    sum[cnt]=arr[i]+arr[j]+arr[k];
                    cnt++;
                }
            }
        }
        sort(sum,sum+35);
        int result=sum[34];cnt=1;
        for(int i=33;i>=0;i--){
            if(result>sum[i]){cnt++;result=sum[i];}
            if(cnt==5){break;}
        }
        cout<<"#"<<t<<' '<<result<<'\n';
    }
    return 0;
}
