#include <iostream>
#include <vector>
using namespace std;

int N,M;
int main(){
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    
    for(int i=0;i<T;i++){
        cin>>N>>M;
        vector<vector<int>> pary(N,vector<int>(N,0));
        int max=0;
        
        for(int j=0;j<N;j++){
            for(int k=0;k<N;k++){
                cin>>pary[j][k];
            }
        }
        
        for(int j=0;j<N-M+1;j++){
            for(int k=0;k<N-M+1;k++){
                int sum=0;
                for(int l=j;l<j+M;l++){
                    for(int m=k;m<k+M;m++){
                        sum+=pary[l][m];
                    }
                }
                if(max<sum){max=sum;}
            }
        }
        
        cout<<"#"<<i+1<<' '<<max<<'\n';
        
        for(int j=0;j<N;j++){
            pary[j].clear();
        }
        pary.clear();
    }
    return 0;
}
