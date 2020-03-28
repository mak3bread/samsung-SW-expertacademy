#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        int N,cnt=0;cin>>N;
        for(int i=1;i<=N;i++){
            int temp=0;
            for(int j=i;j<=N;j++){
                temp+=j;
                if(temp==N){cnt++;break;}
                if(temp>N){break;}
            }
        }
        cout<<"#"<<t<<' '<<cnt<<'\n';
    }
    return 0;
}
