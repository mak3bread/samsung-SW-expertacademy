#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int T;cin>>T;
    for(int t=1;t<=T;t++){
        int sum=0,N,cnt=0;
        cin>>N;
        vector<vector<int>> map(N,vector<int>(N,0));
        for(int i=0;i<N;i++){
            string s;cin>>s;
            for(int j=0;j<N;j++){map[i][j]=s[j]-48;}
        }
        for(int i=0;i<N/2;i++){
            for(int j=N/2-i;j<=N/2+i;j++){sum+=map[i][j];}
        }
        for(int i=N/2;i<N;i++){
            for(int j=i-N/2;j<N-cnt;j++){sum+=map[i][j];}
            cnt++;
        }
        cout<<"#"<<t<<' '<<sum<<'\n';
        for(int i=0;i<N;i++){
            map[i].clear();
        }
        map.clear();
    }
    return 0;
}
