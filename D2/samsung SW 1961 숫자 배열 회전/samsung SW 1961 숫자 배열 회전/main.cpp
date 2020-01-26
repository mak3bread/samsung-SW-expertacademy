#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    cin>>T;
    
    for(int i=1;i<=T;i++){
        int N;
        cin>>N;
        
        vector<vector<int>> map(N,vector<int>(N,0));
        
        for(int j=0;j<N;j++){
            for(int k=0;k<N;k++){
                cin>>map[j][k];
            }
        }
        cout<<"#"<<i<<'\n';
            for(int k=0;k<N;k++){
                for(int l=N-1;l>=0;l--){
                    cout<<map[l][k];
                }
                cout<<' ';
                for(int l=N-1;l>=0;l--){
                    cout<<map[N-k-1][l];
                }
                cout<<' ';
                for(int l=0;l<N;l++){
                    cout<<map[l][N-k-1];
                }
                cout<<'\n';
            }
        for(int j=0;j<N;j++){
            map[j].clear();
        }
        map.clear();
    }
    return 0;
}
