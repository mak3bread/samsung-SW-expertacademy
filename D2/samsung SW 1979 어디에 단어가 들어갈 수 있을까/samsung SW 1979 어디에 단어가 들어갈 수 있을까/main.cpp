#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    cin>>T;
    
    for(int i=1;i<=T;i++){
        int N,K;
        cin>>N>>K;
        vector<vector<int>> map(N,vector<int>(N,0));
        int result=0;
        
        for(int j=0;j<N;j++){
            for(int k=0;k<N;k++){
                cin>>map[j][k];
            }
        }
        
        for(int j=0;j<N;j++){
            int garo_cnt=0;
            int sero_cnt=0;
            for(int k=0;k<N;k++){
                if(map[j][k]==1){
                    garo_cnt++;
                }else{garo_cnt=0;}
                if(garo_cnt==K){
                    if(k==N-1){
                    result++;break;
                    }
                    if(map[j][k+1]==0){result++;garo_cnt=0;}
                }
                
            }
            for(int k=0;k<N;k++){
                if(map[k][j]==1){
                    sero_cnt++;
                }else{sero_cnt=0;}
                if(sero_cnt==K){
                   if(k==N-1){
                       result++;break;
                    }
                    if(map[k+1][j]==0){result++;sero_cnt=0;}
                }
                
            }
        }
        
        cout<<"#"<<i<<' '<<result<<'\n';
        
        for(int j=0;j<N;j++){
            map[j].clear();
        }
        map.clear();
    }
    
    return 0;
}
